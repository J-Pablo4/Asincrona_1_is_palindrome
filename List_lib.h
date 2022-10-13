//
// Created by jplop on 12/10/2022.
//

#ifndef ASINCRONA_1_LIST_LIB_H
#define ASINCRONA_1_LIST_LIB_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list List;

void is_palindrome();
List* new_list();
void list_append(List *list, int value_to_append);
int delete_at(List *list, int index);

#endif //ASINCRONA_1_LIST_LIB_H
