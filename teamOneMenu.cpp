#include "teamOneMenu.h"


#include "teamOneMenu.h"
#include "validateMenu.h"

#include <iostream>




int teamOneMenu()
{
	
	int num1;

	std::cout << "Press 1 for Vampire\n";
	std::cout << "Press 2 for Barbarian\n";
	std::cout << "Press 3 for Blue Men\n";
	std::cout << "Press 4 for Medusa\n";
	std::cout << "Press 5 for Harry Potter\n";

	std::cin >> num1;
	validateMenu(num1);
	return num1;


}