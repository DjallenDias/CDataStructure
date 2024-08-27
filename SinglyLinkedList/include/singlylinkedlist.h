#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

typedef struct singly_linked_list SinglyList;

SinglyList *create_list(void);

SinglyList *last_item(SinglyList *);

SinglyList *copy_list(SinglyList *);

SinglyList *invert_list(SinglyList *);

SinglyList *concat(SinglyList *, SinglyList *);

SinglyList *remove_n(SinglyList *, int);

SinglyList *separates_in_n(SinglyList **, int);

SinglyList *merge_lists(SinglyList *, SinglyList *);

void insert_beginning(SinglyList **, int);

void show_list(SinglyList *);

void free_list(SinglyList **);

int is_equal(SinglyList *, SinglyList *);

int greater_than(SinglyList *, int);

int len(SinglyList *);

#endif // SINGLYLINKEDLIST_H