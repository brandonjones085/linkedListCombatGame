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
#include "teamOneMenu.h"

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

	Queue q; 

	for(int i = 1; i <= teamOneNumPlayers; i++)
	{
		std::cout << "\nWho would you like to choose for player number " << teamOneNumPlayers << std::endl; 
		int t1 = teamOneMenu();
		if (t1 == 1)
		{
			//vampire
			Character *v1 = new Vampire(); 

			v1->setName(); 
			q.addNodeTail(v1); 
		}
		else if (t1 == 2)
		{
			//barbarian
			Character *v1 = new Barbarian();

			v1->setName();
			q.addNodeTail(v1);


		}
		else if (t1 == 3)
		{
			//bluemen
			Character *v1 = new blueMen();

			v1->setName();
			q.addNodeTail(v1);
		}
		else if (t1 == 4)
		{
			//medusa
			Character *v1 = new Medusa();

			v1->setName();
			q.addNodeTail(v1);
		}
		else if(t1 ==5)
		{
			//harry potter
			Character *v1 = new HarryPotter();

			v1->setName();
			q.addNodeTail(v1);
		}
	}


	std::cout << "\n\nNow for team two..." << std::endl; 

	for (int i = 1; i <= teamTwoNumPlayers; i++)
	{
		std::cout << "\nWho would you like to choose for player number " << teamTwoNumPlayers << std::endl;
		int t2 = teamOneMenu(); 

		if (t2 == 1)
		{
			//Vampire
			Character *v2 = new Vampire(); 
			v2->setName();
			q.addNodeTail(v2);
		}
		else if (t2 == 2)
		{
			//Barbarian
			Character *v2 = new Barbarian();
			v2->setName();
			q.addNodeTail(v2);
		}
		else if (t2 == 3)
		{
			//Bluemen
			Character *v2 = new blueMen();
			v2->setName();
			q.addNodeTail(v2);
		}
		else if (t2 == 4)
		{
			//medusa
			Character *v2 = new Medusa();
			v2->setName();
			q.addNodeTail(v2);
		}
		else if (t2 == 5)
		{
			//harry potter
			Character *v2 = new HarryPotter();
			v2->setName();
			q.addNodeTail(v2);
		}


	}


	std::cin.clear();
	std::cin.sync();
	std::cin.ignore();

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