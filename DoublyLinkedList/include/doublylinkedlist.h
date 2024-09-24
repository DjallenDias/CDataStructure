#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

typedef struct doubly_linked_list DoublyList;

/*
*
*/
DoublyList *create_list(void);

/*
*
*/
DoublyList *last_item(DoublyList *);

/*
*
*/
DoublyList *copy_list(DoublyList *);

/*
*
*/
DoublyList *invert_list(DoublyList *);

DoublyList *concat(DoublyList *, DoublyList *);

DoublyList *separates_in_n(DoublyList **, int);

DoublyList *merge_lists(DoublyList *, DoublyList *);

DoublyList *get_element(DoublyList *, int);

void remove_all_n(DoublyList **, int);

void remove_f_n(DoublyList **, int);

/*
*
*/
void insert_beginning(DoublyList **, int);

/*
*
*/
void insert_end(DoublyList **, int);

/*
*
*/
void show_list(DoublyList *);

/*
*
*/
void free_list(DoublyList **);

int is_equal(DoublyList *, DoublyList *);

int greater_than(DoublyList *, int);

int len(DoublyList *);

#endif // DOUBLYLINKEDLIST_H