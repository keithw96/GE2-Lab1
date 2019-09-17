#include "DrawImpl.h"
#include "Player.h"

int main()
{
	DrawAPI* api = new DrawImpl();
	Character* character = new Player(api);
	character->Draw();
	std::cin.get();
	return 0;
}