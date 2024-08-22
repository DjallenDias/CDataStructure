#ifndef SLINKEDLIST_H
#define SLINKEDLIST_H

typedef struct s_linked_list List;

void insert_beginning(int, List **);

void create_list(List **);

void freelist(List **);

void show_list(List *);

#endif // SLINKEDLIST_H