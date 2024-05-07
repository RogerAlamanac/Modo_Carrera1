#include "Team.h"
#include <iostream>
#include <ctime>

const int NUM_PLAYERS_INITIAL = 20;
void Team::InicializeTeam() {
	Player player[NUM_PLAYERS_INITIAL];
	for (int i = 0; i < NUM_PLAYERS_INITIAL; ++i) {
		
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

Team::Team() {

}