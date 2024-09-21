#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

// Struct to represent a knot of a singly linked list
typedef struct singly_linked_list SinglyList;

/**
* @brief Starts the linked list
*
* Make a SinglyList pointer to point to null,
* starting the list as empty
*
* @return NULL
*/
SinglyList *create_list(void);

/**
* 
* @brief Get the last item from a singly linked list
*
* Return the last item from a singly linked list
*
* Parameters:
* @param SinglyList* - The list to get the last item
*
* @return SinglyList* - The last item from the list parameter
*/
SinglyList *last_item(SinglyList *);

/**
* 
* @brief Create a copy of a singly linked list
*
* Create a copy, at other memory address, based on the SinglyList parameter
*
* Parameters:
* @param SinglyList* Pointer to SinglyList
*
* @return SinglyList* - Pointer to the new copied list
*/
SinglyList *copy_list(SinglyList *);

/**
* 
* @brief Inverts a singly linked list
*
* Create a copy of the SinglyList parameter and return the inverted copy
*
* Parameters:
* @param SinglyList* Pointer to SinglyList
*
* @return SinglyList* - Pointer to the inverted copy
*/
SinglyList *invert_list(SinglyList *);

/**
* 
* @brief Concatenate two singly linked lists
*
* Make a copy of the two list parameters
* and make the last element of the first list copy
* pointers to the first element of the second list copy
*
* Parameters:
* @param SinglyList* Pointer to the first SinglyList
* @param SinglyList* Pointer to second SinglyList
*
* @return SinglyList* - Pointer to the new concatenated list
*/
SinglyList *concat(SinglyList *, SinglyList *);

/**
* 
* @brief Separate the list in a number
*
* Searches for a specific number in the param list. If the number is found,
* the list is separeted in the next knot that the number is.
* And returns a pointer that points to the remaining part that was separeted.
*
* @param SinglyList** Pointer to a pointer thats points to a SinglyList
* @param int The number that will be searched to separate the list in
*
* @return SinglyList* - Pointer to the remaining list
*/
SinglyList *separates_in_n(SinglyList **, int);

/**
* 
* @brief Merges two lists into one
*
* Merges two singly linked lists into a new list by alternating elements 
* from both lists. The elements from the first list are inserted first, 
* followed by elements from the second list, until all elements from both 
* lists are exhausted. The resulting list maintains the original order 
* of elements from both input lists.
*
* @param SinglyList* Pointer to a SinglyList
* @param SinglyList* Pointer to a SinglyList
*
* @return SinglyList* - Pointer to the merged list
*/
SinglyList *merge_lists(SinglyList *, SinglyList *);

/**
* 
* @brief Get element at index
*
* Retrieves a copy of the node at the specified index from a singly linked list. 
* The function returns a new list containing only the element at the given index, 
* discarding all subsequent elements.
*
* @param SinglyList* Pointer to a SinglyList
* @param index The position of the element to retrieve.
* @return A new singly linked list containing only the element at the specified index, 
*         or NULL if the index is out of bounds.
*/
SinglyList *get_element(SinglyList *, int);

/**
* 
* @brief Remove all occurrences of a number from the singly linked list
*
* Searches for all occurrences of a specific number in the list. 
* If the number is found, each occurrence is removed from the list. 
*
* @param SinglyList** Pointer to a pointer thats points to a SinglyList
* @param int The number that will be removed
* 
* @return Void - Changes the list passed by parameter
*/
void remove_all_n(SinglyList **, int);

/**
* 
* @brief Remove the first occurrence of a number from the singly linked list
*
* Searches for the first occurrence of a specific number in the list. 
* If the number is found, it is removed from the list. 
*
* @param SinglyList** Pointer to a pointer thats points to a SinglyList
* @param int The number that will be removed
*
* @return Void - Changes the list passed by parameter
*/
void remove_f_n(SinglyList **, int);

/**
* 
* @brief Insert a new element at the beginning of the list
*
* The parameter list will be updated. The integer param
* will be inserted at the beginning of the list.
*
* Parameters:
* @param SinglyList** Pointer to a pointer thats points to a SinglyList
* @param int* The element to be inserted
*
* @return Void - Changes the list passed by parameter
*/
void insert_beginning(SinglyList **, int);

/**
* 
* @brief Insert a new element at the end of the list
*
* The integer param
* will be inserted at the end of the list.
*
* Parameters:
* @param SinglyList** Pointer to a pointer thats points to a SinglyList
* @param int* The element to be inserted
*
* @return Void - Changes the list passed by parameter
*/
void insert_end(SinglyList **, int);

/**
* 
* @brief Show all elements in a list
*
* @param SinglyList* Pointer to a SinglyList
*/
void show_list(SinglyList *);

/**
* 
* @brief Deallocate the list from memory
*
* @param SinglyList** Pointer to a pointer thats points to a SinglyList
*/
void free_list(SinglyList **);

/**
* 
* @brief Compare two lists
*
* @param SinglyList* Pointer to a SinglyList
* @param SinglyList* Pointer to a SinglyList
*
* @return 0 - not equal | 1 - equal
*/
int is_equal(SinglyList *, SinglyList *);

/**
* 
* @brief Return the number of elements greater than that passed by paramater
*
* @param SinglyList* Pointer to a SinglyList
* @param int Element to compare
*
* @return Number of elements greater than that passed by paramater
*/
int greater_than(SinglyList *, int);

/**
* 
* @brief Return the length of the list
*
* @param SinglyList* Pointer to a SinglyList
*
* @return Length of the list
*/
int len(SinglyList *);

#endif // SINGLYLINKEDLIST_H