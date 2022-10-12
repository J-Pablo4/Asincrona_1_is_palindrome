//
// Created by jplop on 12/10/2022.
//

#include "List_lib.h"



typedef struct node
{
    int value;
    struct node *next;
}Node;

struct list
{
    int count;
    Node *head;
};

Node* node_new(int value_to_append)
{
    Node *new_node = malloc(sizeof (Node));
    new_node->value = value_to_append;
    new_node->next = NULL;
    return new_node;
}
List* new_list()
{
    List *new_list = malloc(sizeof (List));
    new_list->head = NULL;
    new_list->count = 0;

    return new_list;
}

void list_append(List *list, int value_to_append)
{
    if(list->head == NULL)
    {
        list->head = node_new(value_to_append);
        list->count ++;
    }else
    {
        Node *current = list->head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = node_new(value_to_append);
        list->count ++;
    }
}

void print_list(List *list)
{
    Node *current = list->head;
    while (current != NULL)
    {
        printf("[%d]->",current->value);
        current = current->next;
    }
    printf("NULL\n");
}

int delete_at(List *list, int index)
{
    if(index == 0)
    {
        Node *to_free = list->head;
        int value_to_return = to_free->value;
        list->head = list->head->next;
        free(to_free);
        list->count --;
        return value_to_return;
    }
    Node *current = list->head;
    for (int i = 0; i < index - 1; i++)
    {
        current = current->next;
    }

    Node *to_delete = current->next;
    int value_to_return = to_delete->value;
    current->next = current->next->next;
    free(to_delete);
    list->count --;
    return value_to_return;
}

int is_palindrome(List *list)
{
    List *new = new_list();
    Node *current = list->head;
    int last_element = 0;
    int first_element = 0;
    while (current != NULL)
    {
        list_append(new, current->value);
        current = current->next;
    }
    print_list(new);
    while (new->count > 1)
    {
        first_element = delete_at(new, 0);
        last_element = delete_at(new, new->count - 1);

        if(first_element != last_element)
        {
            return 0;
        }
    }
    return 1;
}
