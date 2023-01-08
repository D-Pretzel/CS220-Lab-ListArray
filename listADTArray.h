#ifndef LISTADT_H
#define LISTADT_H
#define MAX 250

typedef struct ListADTArray_struct {
	int items[MAX];
	int size;
} ListADTArray;

/**
 * @brief Create a List object
 * @return ListADTArray
 */
ListADTArray createList();

/**
 * @brief Append an item to the end of the list
 * @param L Pointer to the list
 * @param X The item to append
 * @pre The list is not full (at max size)
 * @post The item is added to the end of the list
 * @return int
 */
int append(ListADTArray* L, int X);

/**
 * @brief Prepend an item to the beginning of the list
 * @param L Pointer to the list
 * @param X The item to prepend
 * @pre The list is not full (at max size)
 * @post The item is added to the beginning of the list
 * @return int
 */
int prepend(ListADTArray* L, int X);

int insertAfter(ListADTArray* L, int W, int X);

/**
 * @brief Remove an item from the list
 * @param L	Pointer to the list
 * @param X The item to remove
 * @pre The list is not empty
 * @post The item is removed from the list
 * @return int
 */
int removeItem(ListADTArray* L, int X);

int linearSearch(ListADTArray L, int X);

int binarySearch(ListADTArray L, int X);

/**
 * @brief Check if the list is empty
 * @param L	The list to check
 * @return int - 1 if not empty, 0 if empty
 */
int isEmpty(ListADTArray L);

int getLength(ListADTArray L);

/**
 * @brief Print the list contents to the terminal
 * @param L The list to print
 * @pre The list is not empty
 * @post The list contents are printed to the terminal
 * @return void
 */
void print(ListADTArray L);

/**
 * @brief Print the list contents in reverse order to the terminal
 * @param L The list to print
 * @pre The list is not empty
 * @post The list contents are printed to the terminal in reverse order
 * @return void
 */
void printReverse(ListADTArray L);

/**
 * @brief Sort the list in ascending order
 * @param L Pointer to the list
 * @pre The list is not empty
 * @post The list is sorted in ascending order
 * @return void
 */
void sort(ListADTArray* L);

#endif // listADT_H