

#include "menu.h"
#include "Game.h"

#include <iostream>

int main()
{
	int num = menu();
	if (num == 1)
	{
		Game g; 
		g.runGame(); 

	}
	else
	{
		std::cout << "\nGoodbye\n\n"; 
	}
}


