#include "doublylinkedlist.h"

#include <stdio.h>

int main(void) {
    while (1) {
    
        DoublyList *l1 = create_list();

        for(int i = 10; i > 0; i--) {
            insert_end(&l1, i);
        }

        show_list(l1);

        DoublyList *l1copy = copy_list(l1);
        show_list(l1copy);

        DoublyList *l1inverted = invert_list(l1);
        show_list(l1inverted);

        free_list(&l1);
        free_list(&l1copy);
        free_list(&l1inverted);

        DoublyList *l2 = create_list();
        for(int i = 0; i < 10; i++) {
            insert_beginning(&l2, i);
        }
        insert_end(&l2, 1);
        insert_beginning(&l2, 1);

        puts("");
        show_list(l2);

        remove_all_n(&l2, 1);
        show_list(l2);

        break;
    }

    return 0;
}