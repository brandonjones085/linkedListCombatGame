/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/20/2019
** Description:  The Queue class
*******************************************************************************/



#include "Queue.h"
#include <iostream>

Queue::Queue()
{
	head = NULL; 
	tail = NULL; 
}


/*******************************************************************************
** Description:  Takes a Character object and adss it to the linked list
*******************************************************************************/

void Queue::addNodeTail(Character *n)
{
	if (head == NULL)
	{
		head = new node(n); 
		setNodeHead(head); 
		setNodeTail(head); 
	}
	else
	{
		node *ptr = head; 
		while (ptr->next != NULL)
		{
			ptr = ptr->next; 
		}

		ptr->next = new node(n); 

		setNodeTail(ptr->next); 
	}
}

//sets the head of the linked list
void Queue::setNodeHead(node *n)
{
	this->head = n;
}

//sets the tail for the linked list
void Queue::setNodeTail(node *n)
{
	this->tail = n; 
}
