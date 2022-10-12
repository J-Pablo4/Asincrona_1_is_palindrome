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
    return new_list;
}

void list_append(List *list, int value_to_append)
{
    if(list->head == NULL)
    {
        list->head = node_new(value_to_append);
    }else
    {
        Node *current = list->head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = node_new(value_to_append);
    }
}

void is_palindrome(List *list)
{

}
