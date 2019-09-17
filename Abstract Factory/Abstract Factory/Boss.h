#pragma once
#ifndef BOSS
#define BOSS

#include "Character.h"
class Boss : public Character
{
public: 
	void draw()
	{
		std::cout << "Draw Boss" << std::endl;
	}
};


#endif // !BOSS