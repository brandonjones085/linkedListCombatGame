#ifndef NODE_HPP
#define NODE_HPP

#include "Character.h"
#include <iostream>

class Node
{
protected: 
	struct node
	{
		Character *player; 
		node *next = NULL; 
		node *prev = NULL; 
		node(Character *p)
		{
			this->player = p; 
		};
	};



	
};


#endif // !NODE_HPP
