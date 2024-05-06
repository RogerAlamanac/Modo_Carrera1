#include "Team.h"
#include <iostream>

const int NUM_PLAYERS_INITIAL = 20;
void Team::InicializeTeam() {
	for (int i = 0; i < NUM_PLAYERS_INITIAL; ++i) {
		std::cin >> player.name;
	}
}