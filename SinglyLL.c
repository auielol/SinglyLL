/*
================================================================================
FILE        : SinglyLL.c
AUTHOR      : Emmanuel Torres
DESCRIPTION : Functions for Singly Linked List
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
FUNCTION    : insertFront
DESCRIPTION : Inserts element at the front of the list
ARGUMENTS   : LIST *L
			  int data
RETURNS     : void 
================================================================================
*/
void insertFront(LIST *L, int data)
{	
	NODE *newNode = (NODE*)malloc(sizeof(NODE));
	
	newNode->x = data;
	newNode->next = L->head;
	
	L->head = newNode;
	
}
/*
================================================================================
FUNCTION    : insertRear
DESCRIPTION : Inserts element at the rear of the list
ARGUMENTS   : LIST *L
			  int data
RETURNS     : void 
================================================================================
*/
void insertRear(LIST *L, int data)
{
	NODE *newNode = (NODE*)malloc(sizeof(NODE));
	
	newNode->x = data;
	newNode->next = NULL;
	
	NODE *tempNode = L->head;
	
	while (tempNode->next != NULL)
	{
		tempNode = tempNode->next;
	}
	
	tempNode->next = newNode;
}
/*
================================================================================
FUNCTION    : insertAt
DESCRIPTION : Inserts element at the nth position of the list
ARGUMENTS   : LIST *L
			  int data
			  int p
RETURNS     : void 
================================================================================
*/
void insertAt(LIST *L, int data, int p)
{
	NODE *newNode = (NODE*)malloc(sizeof(NODE));
	
	newNode->x = data;
	
	int i;
	
	NODE *tempNode = L->head;
	
	for (i = 2; i < p; i++)
	{
		if(tempNode->next != NULL)
		{
			tempNode = tempNode->next;
		}
	}
	
	newNode->next = tempNode->next;
	tempNode->next = newNode;
}
/*
================================================================================
FUNCTION    : deleteFront
DESCRIPTION : Deletes element at the front of the list
ARGUMENTS   : LIST *L
RETURNS     : void 
================================================================================
*/
void deleteFront(LIST *L)
{
	L->head = L->head->next;
}
/*
================================================================================
FUNCTION    : deleteRear
DESCRIPTION : Deletes element at the rear of the list
ARGUMENTS   : LIST *L
RETURNS     : void 
================================================================================
*/
void deleteRear(LIST *L)
{
	NODE *tempNode = L->head;
	
	while(tempNode->next->next != NULL)
	{
		tempNode = tempNode->next;
	}
	
	tempNode->next = NULL;
}
/*
================================================================================
FUNCTION    : insertAt
DESCRIPTION : Deletes element at the nth position of the list
ARGUMENTS   : LIST *L
			  int p
RETURNS     : void 
================================================================================
*/
void deleteAt(LIST *L, int p)
{
	int i;
	
	NODE *tempNode = L->head;
	
	for (i = 2; i < p; i++)
	{
		if(tempNode->next != NULL)
		{
			tempNode = tempNode->next;
		}
	}
	
	tempNode->next = tempNode->next->next;
}
/*
================================================================================
FUNCTION    : getDisplay
DESCRIPTION : Displays Singly Linked List
ARGUMENTS   : NODE *h
RETURNS     : void 
================================================================================
*/
void displayAll(NODE *h)
{
	while(h != NULL)
	{
		printf("\n\t %d\n\n",h->x);
		h = h->next;
	}
}
/*
================================================================================
FUNCTION    : getDisplay
DESCRIPTION : Display format
ARGUMENTS   : LIST *L
RETURNS     : void 
================================================================================
*/
void getDisplay(LIST *L)
{
	printf("Node:");
	
	displayAll(L->head);
	
	system("pause");
	system("cls");
}
