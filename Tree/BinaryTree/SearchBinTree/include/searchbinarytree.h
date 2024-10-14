#ifndef SEARCHBINARYTREE_H
#define SEARCHBINARYTREE_H

typedef struct t_knot Knot;

Knot *create_knot(void);

Knot *insert_knot(Knot *, int);

Knot *search_for(Knot *, int);

int tree_height(Knot *);

void show_tree(Knot *);

void show_tree_pre(Knot *);
void show_tree_pos(Knot *);

#endif // BINARYTREE_H