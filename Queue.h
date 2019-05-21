

#ifndef QUEUE_HPP
#define QUEUE_HPP


#include "Node.h"

#include <iostream>

class Queue : public Node
{
private: 
	node *head = NULL; 
	node *tail = NULL; 
	node *n = NULL; 

public:
	Queue(); 
	void addNodeHead(node*);
	void addNodeTail(Character*);
	void delNodeHead();
	void delNodeTail();
	void printNodes();
	void printNodesRev();
	void setNodeTail(node*);
	int getNodeTail();
	void setNodeHead(node*);
	int getNodeHead();



};

#endif
