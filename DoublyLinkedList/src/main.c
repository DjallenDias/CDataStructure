#include "doublylinkedlist.h"

#include <stdio.h>

int main(void) {
    while (1) {
    
        DoublyList *l1 = create_list();

        for(int i = 10; i > 0; i--) {
            insert_end(&l1, i);
        }

        printf("List l1: "); show_list(l1);

        DoublyList *l1copy = copy_list(l1);
        printf("List l1 copy: "); show_list(l1copy);
        printf("\tList l1 addres %p", l1);
        puts("");
        printf("\tList l1 copy addres %p", l1copy);
        puts("");

        DoublyList *l1inverted = invert_list(l1);
        printf("List l1 inveted: "); show_list(l1inverted);

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
        printf("List l2: "); show_list(l2);

        remove_all_n(&l2, 1);
        printf("List l2 without numbers 1: "); show_list(l2);
        
        free_list(&l2);

        DoublyList *l3, *l4;
        l3 = create_list();
        l4 = create_list();

        for(int i = 0; i < 9; i++) {
            insert_beginning(&l3, i);
        }
        printf("List l3: "); show_list(l3);

        for(int i = 9; i < 21; i++) {
            insert_beginning(&l4, i);
        }
        printf("List l4: "); show_list(l4);

        DoublyList *l3concatl4 = concat(l3, l4);
        printf("List l3 concatenated with list l4: "); show_list(l3concatl4);

        free_list(&l3);
        free_list(&l4);
        free_list(&l3concatl4);

        DoublyList *l5 = create_list();
        for(int i = 0; i < 10; i++) {
            insert_beginning(&l5, i);
        }

        printf("List l5: ");
        show_list(l5);

        DoublyList *l5separated;

        l5separated = separates_in_n(&l5, 6);

        printf("List l5: ");
        show_list(l5);
        printf("List l5 separated in 6: ");
        show_list(l5separated);

        free_list(&l5);
        free_list(&l5separated);

        DoublyList *l6, *l7;
        l6 = create_list();
        l7 = create_list();

        for(int i = 0; i < 9; i++) {
            insert_beginning(&l6, i);
        }
        printf("List l6: "); show_list(l6);

        for(int i = 9; i < 21; i++) {
            insert_beginning(&l7, i);
        }
        printf("List l7: "); show_list(l7);

        DoublyList *l6mergel7 = merge_lists(l6, l7);

        printf("L6 and l7 merged: ");
        show_list(l6mergel7);

        free_list(&l6);
        free_list(&l7);
        free_list(&l6mergel7);

        DoublyList *l8 = create_list();
        for(int i = 0; i < 11; i++) {
            insert_end(&l8, i);
        }

        printf("List l8: ");
        show_list(l8);

        DoublyList *l8element = get_element(l8, 6);
        printf("6th element at list l8: ");
        show_list(l8element);

        free_list(&l8);
        free_list(&l8element);

        break;
    }

    return 0;
}