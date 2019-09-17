#pragma once
#ifndef CHARACTER
#define CHARACTER

#include <iostream>
class Character
{
public:
	Character(){}
	void Print() { std::cout << "Printing Character" << std::endl; }
	virtual ~Character(){}
	virtual void draw() = 0;

};

#endif // !CHARACTER