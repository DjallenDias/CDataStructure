#include "doublylinkedlist.h"

#include <stdlib.h>
#include <stdio.h>
struct doubly_linked_list {
    struct doubly_linked_list *prev;
    int data;
    struct doubly_linked_list *next;
};

DoublyList *create_list(void) {
    return NULL;
}

void insert_beginning(DoublyList **l, int n) {
    DoublyList *aux = *l;
    DoublyList *new = (DoublyList *) malloc(sizeof(DoublyList));

    if (new == NULL) {
        printf("Unnable to allocate memory");
        return;
    }

    new->data = n;
    new->next = aux->next;
    new->prev = aux->prev;

    *l = new;
}

void insert_end(DoublyList **l, int n) {
    if ((*l) == NULL) {
        insert_beginning(l, n);
        return;
    }

    DoublyList *last = last_item(*l);
    DoublyList *new = (DoublyList *) malloc(sizeof(DoublyList));

    if (new == NULL) {
        printf("Unnable to allocate memory");
        return;
    }

    new->data = n;
    new->next = last->next;
    new->prev = last;
    last->next = new;
}