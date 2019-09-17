#pragma once
#ifndef FACTORY
#define FACTORY

#include "Character.h"
#include "Player.h"
#include "Boss.h"
class Factory
{
public:
	virtual Character* CreatePlayer() = 0;
	virtual Character* CreateOpponents() = 0;
};

#endif // !FACTORY
