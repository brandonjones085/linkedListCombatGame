/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The attackMenu function asks for user input and returns an int. The number returned will
** indicate the users choice of character.
*******************************************************************************/


#include "menu.h"
#include "validateMenu.h"

#include <iostream>




int menu()
{


	int num1;

	std::cout << "\n\nWelcom to the combat fantasy game\n\n" << std::endl;
	std::cout << "What would you like to do?\n" << std::endl;
	std::cout << "1. Play\n";
	std::cout << "2. Exit\n";
	
	std::cin >> num1;
	validateMenu(num1);
	return num1;


}