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
#include <string>



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
	int round = 1;

	teamOne = new Queue;
	teamTwo = new Queue; 
	losers = new Queue; 
	Node *l = losers->addNodeTail(nullptr);



	int t1 = 0;
	for(int i = 1; i <= teamOneNumPlayers; i++)
	{
		//
		Node *n1 = teamOne->addNodeTail(nullptr);
		std::string name = " ";
		std::cout << "\nWho would you like to choose for player number " << i << std::endl; 
		t1 = teamOneMenu();

		if (t1 == 1)
		{
			//vampire
			n1->setPlayer(new Vampire); 
		}
		else if (t1 == 2)
		{
			//barbarian
			n1->setPlayer(new Barbarian);
		}
		else if (t1 == 3)
		{
			//bluemen
			n1->setPlayer(new blueMen);
		}
		else if (t1 == 4)
		{
			//medusa
			n1->setPlayer(new Medusa);
		}
		else if(t1 ==5)
		{
			//harry potter
			n1->setPlayer(new HarryPotter);
		}

		//Sets their name
		std::cout << "\nWhat would you like their name to be? "; 
		std::cin.ignore(); 
		std::getline (std::cin, name); 
		
		n1->getPlayer()->setName(name); 

	}


	std::cout << "\n\nNow for team two..." << std::endl; 

	for (int i = 1; i <= teamTwoNumPlayers; i++)
	{
		//Adds noes to end of queue
		Node *n2 = teamTwo->addNodeTail(nullptr);
		std::string name = " ";
		
		std::cout << "\nWho would you like to choose for player number " << i << std::endl;
		int t2 = teamOneMenu(); 

		if (t2 == 1)
		{
			//Vampire
			n2->setPlayer(new Vampire);
		}
		else if (t2 == 2)
		{
			//Barbarian
			n2->setPlayer(new Vampire); 
		}
		else if (t2 == 3)
		{
			//Bluemen
			n2->setPlayer(new blueMen); 
		}
		else if (t2 == 4)
		{
			//medusa
			n2->setPlayer(new Medusa);
		}
		else if (t2 == 5)
		{
			//harry potter
			n2->setPlayer(new HarryPotter); 
		}

		//Sets their name
		std::cout << "\nWhat would you like their name to be? ";
		std::cin.ignore();
		std::getline(std::cin, name);

		n2->getPlayer()->setName(name);


	}

	std::cout << std::endl; 

	std::cout << "\nThe team one players are...\n"; 
	teamOne->printQueue(); 
	std::cout << std::endl; 
	std::cout << "\nThe team one players are...\n";
	teamTwo->printQueue(); 



	//Begins the game
	while (game)
	{
		//Pauses game between rounds
		std::cin.clear();
		std::cin.sync(); 
		std::cin.ignore(); 
		

		
		std::cout << "\nThe tournament has begun\n"; 
		std::cout << "\n\nRound number: " << round << std::endl;


		std::cout << teamOne->getFirst()->getName() << " versus " << teamTwo->getFirst()->getName() << std::endl; 
	
		teamOne->getFirst()->makeAttack(); 

		 int aAttack = teamOne->getFirst()->getTotalAttack(); 

		 teamTwo->getFirst()->makeDefense(aAttack);

		 


		 //Shows all the totals
		 std::cout << "\nAttacker strength " << teamOne->getFirst()->getStregthPoints() << std::endl;
		 std::cout << "Attacker armor " << teamOne->getFirst()->getArmor() << std::endl;
		 std::cout << "\nOpponent strength " << teamTwo->getFirst()->getStregthPoints() << std::endl;
		 std::cout << "Opponent armor " << teamTwo->getFirst()->getArmor() << std::endl;


		std::cout << "\n\nRound number: " << round << std::endl; 

		//increments round by one
		round++; 


		int oStrength = teamTwo->getFirst()->getStregthPoints(); 


		

		if (oStrength < 1)
		{
			game = false; 
			std::cout << teamTwo->getFirst()->getName() << " lost\n"; 
			l->setPlayer(teamTwo->getFirst()); 

			std::cout << "The round is over!\n"; 
		}


		//Starts second stage
		std::cout << "\n\nPlease enter for the opponent to attack now\n" << std::endl;

		std::cout << "-------------------------------------------------------------------" << std::endl;
		std::cin.clear();
		std::cin.sync();
		std::cin.ignore();
		std::cout << "Round number " << round << std::endl;


		teamTwo->getFirst()->makeAttack(); 


		int oAttack = teamTwo->getFirst()->getTotalAttack(); 

		teamOne->getFirst()->makeDefense(oAttack);



		//Shows new totals
		std::cout << "\nAttacker strength " << teamOne->getFirst()->getStregthPoints() << std::endl;
		std::cout << "Attacker armor " << teamOne->getFirst()->getArmor() << std::endl;
		std::cout << "\nOpponent strength " << teamTwo->getFirst()->getStregthPoints() << std::endl;
		std::cout << "Opponent armor " << teamTwo->getFirst()->getArmor() << std::endl;

		int aStrength = teamOne->getFirst()->getStregthPoints(); 

		if (aStrength < 1)
		{
			game = false;
			std::cout << teamOne->getFirst()->getName() << " lost\n";
			losers->addNodeTail(teamTwo->getFirst());

			std::cout << "The round is over!\n";
			l->setPlayer(teamOne->getFirst());
		}



		round++; 
	}


	char y = 'y'; 
	std::cout << "\nWould you like to display the contents of the loser container? y\n "; 
	std::cin >> y; 

	if (putchar(tolower(y)) == 'y')
	{
		//Display loser content

		std::cout << "\n\nThe losers are: " << std::endl; 
		
		losers->printQueue();

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