#pragma once
#ifndef CHARACTERFACTORY
#define CHARACTERFACTORY

#include "Factory.h"

class CharacterFactory : public Factory
{
public: 
	Character* CreatePlayer()
	{
		return new Player;
	}

	Character* CreateOpponents()
	{
		return new Boss;
	}
};


#endif // !CHARACTERFACTORY