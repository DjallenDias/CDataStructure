#ifndef SCIRCULARLINKEDLIST_H
#define SCIRCULARLINKEDLIST_H

typedef struct s_circular_linked_list List;

List *create_list(void);

List *last_item(List *);

List *copy_list(List *);

List *invert_list(List *);

List *concat(List *, List *);

List *remove_n(List *, int);

List *separates_in_n(List *, int);

List *merge_lists(List *, List *);

void insert_beginning(List **, int);

void show_list(List *);

void free_list(List **);

int is_equal(List *, List *);

int greater_than(List *, int);

int len(List *);

#endif // SCIRCULARLINKEDLIST_H