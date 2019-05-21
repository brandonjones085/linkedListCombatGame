#include "Queue.h"
#include <iostream>



Queue::Queue()
{
	head = NULL; 
	tail = NULL; 
}


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


void Queue::setNodeHead(node *n)
{
	this->head = n;
}

void Queue::setNodeTail(node *n)
{
	this->tail = n; 
}
