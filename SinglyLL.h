/*
================================================================================
FILE        : SinglyLL.h
AUTHOR      : Emmanuel Torres
DESCRIPTION : Interface file for function prototypes, global variables and data 
			  structures used for Singly Linked List operations
COPYRIGHT   : February 21, 2020
REVISION HISTORY
Date: 					By: 				Description:
================================================================================
February, 21, 2020		Emmanuel Torres		Creation
February, 22, 2020		Emmanuel Torres		Debugging and Finalization
================================================================================
Header Files
================================================================================*/
#include <stdio.h>
#include <stdlib.h>

/*
================================================================================
Data Structures
================================================================================
*/
typedef struct node
{
	int x;
	struct node *next; 
}NODE;

typedef struct list
{
	int count;
	struct node *head, *tail;
}LIST;
/*
================================================================================
Function Prototypes
================================================================================
*/
void insertFront(LIST *L, int data);
void insertRear(LIST *L, int data);
void insertAt(LIST *L, int data, int p);
void deleteFront(LIST *L);
void deleteRear(LIST *L);
void deleteAt(LIST *L, int p);
void displayAll(NODE *h);
void getDisplay(LIST *L);
