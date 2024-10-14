#ifndef SEARCHBINARYTREE_H
#define SEARCHBINARYTREE_H

typedef struct t_knot Knot;

Knot *create_knot(void);

Knot *search_for(Knot *, int);

void show_tree(Knot *);

#endif // BINARYTREE_H