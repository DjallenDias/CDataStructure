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
* @brief Remove all occurrences of a number from the singly linked list
*
* Creates a copy of the singly linked list provided as a parameter,
* and then searches for all occurrences of a specific number within this copied list. 
* If the number is found, each occurrence is removed from the copy. 
* The function returns a new singly linked list that excludes all occurrences of the specified number.
*
* @param SinglyList* Pointer to the first SinglyList
* @param int The number that will be removed
*
* @return SinglyList* - Pointer to the new list without any occurrences of the number
*/
SinglyList *remove_all_n(SinglyList *, int);

/*
* implemented
*/
SinglyList *remove_f_n(SinglyList *, int);

/**
* 
* @brief Separate the list in a number
*
* Searches for a specific number in the param list. If the number is found,
* the list is separeted in the next knot that the number is.
* And returns a pointer that points to the remaining part that was separeted.
*
* @param SinglyList** Pointer to the SinglyList
* @param int The number that will be searched to separate the list in
*
* @return SinglyList* - Pointer to the remaining list
*/
SinglyList *separates_in_n(SinglyList **, int);

/*
* need to implement the function
*/
SinglyList *merge_lists(SinglyList *, SinglyList *);

/**
* 
* @brief Insert a new element at the beginning
*
* The parameter list will be updated. The integer param
* will be inserted at the beginning of the list.
*
* Parameters:
* @param SinglyList* Pointer to the SinglyList that will be updated
* @param int* The element to be inserted
*
*/
void insert_beginning(SinglyList **, int);

/*
* implemented
*/
void insert_end(SinglyList **, int);

void show_list(SinglyList *);

void free_list(SinglyList **);

int is_equal(SinglyList *, SinglyList *);

int greater_than(SinglyList *, int);

int len(SinglyList *);

#endif // SINGLYLINKEDLIST_H