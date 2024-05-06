#include "Team.h"
#include <iostream>
#include <ctime>

const int NUM_PLAYERS_INITIAL = 20;
void Team::InicializeTeam() {
	Player player[NUM_PLAYERS_INITIAL];
	for (int i = 0; i < NUM_PLAYERS_INITIAL; ++i) {
		player[i].name = rand()%('Z'-'A'+1)+'A';
		std::cout << "Name: " << player[i].name << std::endl;
		player[i].age = rand() % (43 - 16 + 1) + 16; 
		std::cout << "Age: " << player[i].age << std::endl;
		player[i].OVR = rand() % (80 - 60 + 1) + 60;
		std::cout << "OVR: " << player[i].OVR << std::endl;
		player[i].number = rand() % (30 - 2 + 1) + 1;
		std::cout << "Number: " << player[i].number << std::endl;
		std::cout << "-------------------" << std::endl;
	}
}

void Team::PrintTeam() {
	Player player[NUM_PLAYERS_INITIAL];
	for (int i = 0; i < NUM_PLAYERS_INITIAL; ++i) {
		std::cout << "-------------------" << std::endl;
		std::cout << "Name: " << player[i].name << std::endl;
		std::cout << "Number: " << player[i].number << std::endl;
		std::cout << "Age: " << player[i].age << std::endl;
		std::cout << "OVR: " << player[i].OVR << std::endl;
	}
}