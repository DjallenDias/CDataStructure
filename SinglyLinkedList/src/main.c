#include "slinkedlist.h"

int main(void) {
    List *lista1;
    
    create_list(&lista1);

    for (int i = 10; i > 0 ; i--) {
        insert_beginning(i, &lista1);
    }

    show_list(lista1);

    freelist(&lista1);
    return 0;
}
