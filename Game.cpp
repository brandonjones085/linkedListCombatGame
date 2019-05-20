/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The Game class controls the flow of the whole program.
*******************************************************************************/


#include "Game.h"
#include "menu.h"
#include "Barbarian.h"
#include "Vampire.h"
#include "blueMen.h"
#include "Medusa.h"
#include "HarryPotter.h"
#include "validateInt.h"
#include "Queue.h"

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
	int teamOneNumPlayers;
	std::cout << "\nPlease enter the number of players for team one ";
	std::cin >> teamOneNumPlayers;
	validateInt(teamOneNumPlayers); 
	setNumTeamOne(teamOneNumPlayers); 

	int teamTwoNumPlayers;
	std::cout << "\nPlease enter the number of players for team two ";
	std::cin >> teamTwoNumPlayers;
	validateInt(teamTwoNumPlayers); 
	setNumTeamTwo(teamTwoNumPlayers); 

	game = true; 
	int round = 0;



	for(int i = 0; i < teamOneNumPlayers; i++)
	{
		
	}

	while (game)
	{
		//Pauses game between rounds
		std::cin.clear();
		std::cin.sync(); 
		std::cin.ignore(); 


		
		std::cout << "\nThe tournament has begun\n"; 




		std::cout << "\n\nRound number: " << round << std::endl; 
		round++; 


	}


}








void Game::setNumTeamOne(int i)
{
	this->numTeamOne = i; 
}

void Game::setNumTeamTwo(int i)
{
	this->numTeamTwo = i; 
}


Game::~Game()
{
}