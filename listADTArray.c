#include <stdio.h>
#include "listADTArray.h"

ListADTArray createList() {
	ListADTArray L;
	L.size = 0;
	return L;
}

int append(ListADTArray *L, int X) {
	if (L->size < MAX) {
		L->items[L->size] = X;
		L->size++;
		return 1;
	} else {
		return 0;
	}
}

int prepend(ListADTArray *L, int X) {
	if (L->size < MAX) {
		for (int i = L->size; i > 0; i--) {
			L->items[i] = L->items[i - 1];
		}
		L->items[0] = X;
		L->size++;
		return 1;
	} else {
		return 0;
	}
}

int isEmpty(ListADTArray L) {
	return L.size == 0;
}

int getLength(ListADTArray L) {
	return 0;
}

int insertAfter(ListADTArray* L, int W, int X) {
	return 0;
}

int removeItem(ListADTArray* L, int X) {
	int removed = 0;
	for (int i = 0; i < L->size; i++) {
		if (removed && (i < L->size - 1)) {
			L->items[i] = L->items[i + 1];
		}
		if (L->items[i] == X) {
			removed = 1;
		}
	}
	return removed;
}

int linearSearch(ListADTArray L, int X) {
	return 0;
}

int binarySearch(ListADTArray L, int X) {
	return 0;
}

void print(ListADTArray L) {
	printf("List Contents: ");
	for (int i = 0; i < L.size; i++)
		printf("%d ", L.items[i]);
	printf("\n");
}

void printReverse(ListADTArray L) {
	printf("List Contents (In Reverse): ");
	for (int i = L.size-1; i >=0; i--)
		printf("%d ", L.items[i]);
	printf("\n");
}

void sort(ListADTArray* L) {
	int swap;
	for (int i=0; i<L->size-1; i++)	// Loop through the list
		for (int j = 0; j < L->size - i - 1; j++)
			if(L->items[j]>L->items[j+1]){	// Swap if the item is greater than the next item
				swap = L->items[j];	// Swap the items
				L->items[j] = L->items[j + 1];
				L->items[j + 1] = swap;
			}
}