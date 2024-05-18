#include "Team.h"
#include <iostream>
#include <ctime>

const int NUM_PLAYERS_INITIAL = 20;
void Team::InicializeTeam() {
	Player player[NUM_PLAYERS_INITIAL];
	for (int i = 0; i < NUM_PLAYERS_INITIAL; ++i) {
		player[i].name = rand() % ('Z' - 'A' + 1) + 'A';
		player[i].age = rand() % (43 - 16 + 1) + 16;
		player[i].OVR = rand() % (80 - 60 + 1) + 60;
		player[i].number = rand() % (30 - 2 + 1) + 1;
		int positions = rand() % 6;
		switch (positions) {
		case 0: player[i].position = Positions::STRIKER;
			break;
		case 1: player[i].position = Positions::WINGER;
			break;
		case 2: player[i].position = Positions::MIDFIELDER;
			break;
		case 3: player[i].position = Positions::FULLBACK;
			break;
		case 4: player[i].position = Positions::CENTERBACK;
			break;
		case 5:player[i].position = Positions::GOALKEEPER;
			break;

		}
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
		switch (player[i].position) {
		case Positions::STRIKER: std::cout << "Position: Striker" << std::endl;
			break;
		case Positions::WINGER: std::cout << "Position: Winger" << std::endl;
			break;
		case Positions::MIDFIELDER: std::cout << "Position: Midfielder" << std::endl;
			break;
		case Positions::FULLBACK: std::cout << "Position: Fullback" << std::endl;
			break;
		case Positions::CENTERBACK: std::cout << "Position: Centerback" << std::endl;
			break;
		case Positions::GOALKEEPER: std::cout << "Position: Goalkeeper" << std::endl;
			break;
		}
	}
}

Team::Team() {
	players = new Player[numPlayers];
}