#ifndef SLINKEDLIST_H
#define SLINKEDLIST_H

typedef struct s_linked_list List;

List *last_item(List *) ;

List *copy_list(List *);

List *invert_list(List *);

int greater_than(int, List *);

int len(List *);

void insert_beginning(int, List **);

void create_list(List **);

void free_list(List **);

void show_list(List *);

#endif // SLINKEDLIST_H