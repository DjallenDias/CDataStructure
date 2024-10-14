#ifndef BINARYTREE_H
#define BINARYTREE_H

typedef struct t_knot Knot;

Knot *create_empty_tree(void);

Knot *create_tree(int, Knot *, Knot *);

Knot *free_tree(Knot *);

int is_empty(Knot *);

int tree_height(Knot *);

void show_tree(Knot *);

#endif // BINARYTREE_H