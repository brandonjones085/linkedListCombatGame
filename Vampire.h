
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The header file for the Vampire class.
*******************************************************************************/


#include "Character.h"

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP


class Vampire : public Character
{
public:
	Vampire();

	virtual void makeAttack();
	virtual void makeDefense(int);

	virtual int getTotalAttack();
	int specialAbility();
	~Vampire();
};


#endif