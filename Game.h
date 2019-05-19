/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The header file for the Game class.
*******************************************************************************/


#ifndef GAME_HPP
#define GAME_HPP

#include "Character.h"

class Game
{
private:
	Character *attacker;
	Character *opponent;
	int numTeamOne; 
	int numTeamTwo; 
	bool game = true;

public:
	Game();

	void runGame();
	void setAttacker(Character*);
	void setOpponent(Character*);
	void setNumTeamOne(int); 
	void setNumTeamTwo(int); 

	~Game();
};


#endif // !