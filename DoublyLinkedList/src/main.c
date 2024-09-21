#include "doublylinkedlist.h"

#include <stdio.h>

int main(void) {
    DoublyList *d = create_list();

    for(int i = 10; i > 0; i--) {
        insert_end(&d, i);
    }

    show_list(d);

    return 0;
}