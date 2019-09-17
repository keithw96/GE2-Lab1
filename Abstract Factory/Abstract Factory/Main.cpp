#include "CharacterFactory.h"
#include "HandleToCharacter.h"
#include <vector>
int main() {

	Factory* factory = new CharacterFactory;
	std::vector<Character*> characters;

	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());

	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}

//	HandleToCharacter handle; handle->Print();

	return 0;
}