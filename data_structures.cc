#include "include/data_structures.h"

#include <stdio.h>
#include <stdlib.h>

void AddAtIndex(single_list_node *head, int index, single_list_node *new) {
    if (index == 0) {
        new->next = head;
        head = new;
        return;
    }

    for (int i = 0; i < index; i++) {
        if (head->next == NULL) {
            head->next = new;
            return;
        }
        head++;
    }

    new->next = head->next;
    head->next = new;
}

void Add(single_list_node *head, single_list_node *new) {
    while (head->next) {
        head++;
    }
    head->next = new;
}

