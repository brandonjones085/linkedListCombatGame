/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The Game class controls the flow of the whole program.
*******************************************************************************/


#include "Game.h"
#include "menu.h"
//#include "Barbarian.h"
//#include "Vampire.h"
//#include "blueMen.h"
//#include "Medusa.h"
//#include "HarryPotter.h"
#include "validateInt.h"
#include <iostream>
#include <cstdlib>



Game::Game()
{
}

/*******************************************************************************
** Description:  This controls the whole flow of the game. ]
** It first runs the menus and determes the characters for the attacker and opponents
** Then runs through the attacks and defense and determines if the characters still have positive values.
** If the strengthPoints drop below 0, the game ends.
*******************************************************************************/

void Game::runGame()
{
	int teamOne;
	std::cout << "\nPlease enter the number of players for team one ";
	std::cin >> teamOne;
	validateInt(teamOne); 

	int teamTwo;
	std::cout << "\nPlease enter the number of players for team two ";
	std::cin >> teamTwo;
	validateInt(teamTwo); 
	


	




		

		





	





}





void Game::setAttacker(Character *a)
{
	attacker = a;
}


void Game::setOpponent(Character *o)
{
	this->opponent = o;
}



Game::~Game()
{
}