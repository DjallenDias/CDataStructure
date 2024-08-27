#ifndef SLINKEDLIST_H
#define SLINKEDLIST_H

typedef struct s_linked_list List;

List *create_list(void);

List *last_item(List *) ;

List *copy_list(List *);

List *invert_list(List *);

List *concat(List *, List *);

List *remove_n(List *, int);

void insert_beginning(List **, int);

void show_list(List *);

void free_list(List **);

int greater_than(List *, int);

int len(List *);

#endif // SLINKEDLIST_H