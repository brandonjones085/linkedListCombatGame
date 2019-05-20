/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The header file for the Game class.
*******************************************************************************/


#ifndef GAME_HPP
#define GAME_HPP

#include "Queue.h"

class Game
{
private:
	Queue *teamOne;
	Queue *teamTwo;
 
	int numTeamOne; 
	int numTeamTwo; 
	bool game = true;

public:
	Game();

	void runGame();
	
	void setNumTeamOne(int); 
	void setNumTeamTwo(int); 

	~Game();
};


#endif // !