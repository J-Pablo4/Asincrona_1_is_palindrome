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

void is_palindrome()
{
    FILE *file = fopen("../input.txt", "r");
    if(file == NULL)
    {
        printf("No se abrio el archivo\n");
        return;
    }else
    {
        int node_value = 0;
        int last_element;
        int first_element;
        List *l = new_list();

        while (!feof(file)) {
            fscanf(file, "%d", &node_value);
            list_append(l, node_value);
        }
        fclose(file);
        FILE *result = fopen("../result.txt", "w");
        if(l->count == 1)
        {
            fputs("True", result);
            fclose(result);
            return;
        }
        while (l->count > 1)
        {
            first_element = delete_at(l, 0);
            last_element = delete_at(l, l->count - 1);

            if(first_element != last_element)
            {
                fputs("False", result);
                fclose(result);
                return;
            }
        }
        fputs("True", result);
        fclose(result);
    }
}
