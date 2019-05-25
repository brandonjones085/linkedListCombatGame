/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/20/2019
** Description:  The header file for the Queue class
*******************************************************************************/



#ifndef QUEUE_HPP
#define QUEUE_HPP


#include "Node.h"

#include <iostream>

class Queue : public Node
{
private: 
	Node *head = NULL; 
	Node *tail = NULL; 
	Node *ptr = NULL; 


public:
	Queue(); 
	void addNodeHead(Node*);
	Node *addNodeTail(Character*);
	void delNodeHead();
	void delNodeTail();
	void printQueue();
	void printNodesRev();
	void setNodeTail(Node*);
	int getNodeTail();
	void setNodeHead(Node*);
	bool isEmpty(); 
	void deleteHead(); 

	Character *getFirst(); 


	Node *getNodeHead();



};

#endif
