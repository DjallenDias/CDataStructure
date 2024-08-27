#ifndef SCIRCULARLINKEDLIST_H
#define SCIRCULARLINKEDLIST_H

typedef struct singly_circular_linked_list SinglyCircularList;

SinglyCircularList *create_list(void);

SinglyCircularList *last_item(SinglyCircularList *);

SinglyCircularList *copy_list(SinglyCircularList *);

SinglyCircularList *invert_list(SinglyCircularList *);

SinglyCircularList *concat(SinglyCircularList *, SinglyCircularList *);

SinglyCircularList *remove_n(SinglyCircularList *, int);

SinglyCircularList *separates_in_n(SinglyCircularList *, int);

SinglyCircularList *merge_lists(SinglyCircularList *, SinglyCircularList *);

void insert_beginning(SinglyCircularList **, int);

void show_list(SinglyCircularList *);

void free_list(SinglyCircularList **);

int is_equal(SinglyCircularList *, SinglyCircularList *);

int greater_than(SinglyCircularList *, int);

int len(SinglyCircularList *);

#endif // SCIRCULARLINKEDLIST_H