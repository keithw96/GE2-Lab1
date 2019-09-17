#pragma once
#ifndef HANDLETOCHARACTER
#define HANDLETOCHARACTER

#include <iostream>
#include "Character.h"

class HandleToCharacter
{
public:

	//HandleToCharacter() : character{ new Character{} } {}
	Character* operator->() { return character; } 

private:
	Character* character;
};

#endif // !HANDLETOCHARACTER
