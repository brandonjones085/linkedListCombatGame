
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The header file for the Barbarian class.
*******************************************************************************/

#include "Character.h"


#ifndef MEDUSA_HPP
#define MEDUSA_HPP

class Medusa : public Character
{
public:
	Medusa();
	virtual void makeAttack();
	virtual void makeDefense(int);

	virtual int getTotalAttack();
	
	~Medusa();
};


#endif