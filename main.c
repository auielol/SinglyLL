/*
================================================================================
FILE        : main.c
AUTHOR      : Emmanuel Torres
DESCRIPTION : The program inserts elements into a singly linked list
			: deletes elements from the list and displays elements.
COPYRIGHT   : February 21, 2020
REVISION HISTORY
Date: 					By: 				Description:
================================================================================
February, 21, 2020		Emmanuel Torres		Creation
February, 22, 2020		Emmanuel Torres		Debugging and Finalization
================================================================================
Header Files
================================================================================*/
#include "SinglyLL.h"

/*
================================================================================
FUNCTION    : main
DESCRIPTION : Executes the main program that defines data, calls functions and
			  displays Singly Linked list
ARGUMENTS   : int argc - argument count
			  int argv - argument vector
RETURNS     : int - return 0
================================================================================
*/
int main(int argc, char *argv[])
{
	LIST *L = (LIST*)malloc(sizeof(LIST));
	L->head = NULL;
	L->tail = NULL;
	L->count = 0;
	
	insertFront(L, 2);
	getDisplay(L);
	
	insertFront(L, 1);
	getDisplay(L);
	
	insertFront(L, 0);
	getDisplay(L);
	
	insertRear(L, 3);
	getDisplay(L);
	
	insertRear(L, 5);
	getDisplay(L);
	
	insertAt(L, 4, 4);
	getDisplay(L);
	
	deleteFront(L);
	getDisplay(L);
	
	deleteRear(L);
	getDisplay(L);
	
	insertAt(L, 88, 2);
	getDisplay(L);
	
	deleteAt(L, 2);
	getDisplay(L);
	
	printf("\nTHANK YOU!\n");
	
	return 0;
}
