#include <iostream>
#include <vector>
#include "Player.h"
#include "DirectXRender.h"

using namespace BC;

int main () 
{
	// Vector stores pointers to class objects

	std::vector<Player*> players;
	// Not using pointer storage
	std::vector<Player> gamePlayers;

	// Testing first with Pointer storage of Player objects
	Player player1;

	Player* pPlayer;

	pPlayer = &player1;

	players.push_back(pPlayer);

	player1.setName("Chris");

	std::cout << "Name: " << players.at(0)->getName() << std::endl;

	players.at(0)->setName("Carlos");

	std::cout << "Name: " << players.at(0)->getName() << std::endl;

	// Testing without pointer storage
	Player p1;
	Player p2;
	Player p3;

	gamePlayers.push_back(p1);
	gamePlayers.push_back(p2);
	gamePlayers.push_back(p3);

	gamePlayers.at(0).setName("Player 1");
	gamePlayers.at(1).setName("Player 2");
	gamePlayers.at(2).setName("Player 3");

	for( int i = 0; i < 3; i++)
	{
		std::cout << gamePlayers.at(i).getName() << std::endl;
	}


	return 0;
}