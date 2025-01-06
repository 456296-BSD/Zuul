//	 ______           _ 
//	|___  /          | |
//	   / /_   _ _   _| |
//	  / /| | | | | | | |
//	 / /_| |_| | |_| | |
//	/_____\__,_|\__,_|_|
//
//	Zuul text based adventure game
//
//	By: Sawyer Scheve
//
//	Last Edited: 1/2/2024
//

#include "room.h"
#include "weapon.h"
#include "consumable.h"
#include "quest.h"
#include <cstring>

int main() {
	// Generate Rooms

	// Column 1
	Room* A1 = new Room("A plain room with grey brick walls and a dirt floor.");
	A1->AddExit("East");
	A1->AddExit("South");

	Room* B1 = new Room("This room looks like the way out but in needs A KEY.");
	B1->AddExit("North");
	B1->AddExit("South");

	Room* C1 = new Room("A plain room with grey brick walls and a dirt floor.");
	C1->AddExit("North");
	C1->AddExit("East");

	// Column 2
	Room* A2 = new Room("A plain room with grey brick walls and a dirt floor.");
	A2->AddExit("East");
	A2->AddExit("West");

	Room* B2 = new Room("A plain room with grey brick walls and a dirt floor.");
	B2->AddExit("East");
	B2->AddExit("South");

	Room* C2 = new Room("A plain room with grey brick walls and a dirt floor.");
	C2->AddExit("North");
	C2->AddExit("West");

	// Column 3
	Room* A3 = new Room("A plain room with grey brick walls and a dirt floor.");
	A3->AddExit("West");
	A3->AddExit("South");

	Room* B3 = new Room("A plain room with grey brick walls and a dirt floor.");
	B3->AddExit("North");
	B3->AddExit("West");
	B3->AddExit("South");

	Room* C3 = new Room("A plain room with grey brick walls and a dirt floor.");
	C3->AddExit("North");

	// Connect Rooms
	Room* rooms[3][3] = {{A1, A2, A3}, {B1, B2, B3}, {C1, C2, C3}};
	int row = 2;
	int col = 1;
	Room* currentRoom = rooms[row][col];
	
	// Start Game
	bool isRunning = true;

	while(isRunning) {
		currentRoom->Describe();
		char input[80];
		std::cout << "What to do? [LEAVE, PICKUP, FIGHT]: ";
		std::cin >> input;
		if(strcmp(input, "LEAVE") == 0) {
			// Check the room's exits
			// If there are enemies the player takes damage from all of them
			std::cout << "Where would you like to go? [Hint: Check Exits]: ";
			std::cin >> input;
			if(strcmp(input, "North") == 0) {
				row--;
			}
			else if(strcmp(input, "South") == 0) {
				row++;
			}
			else if(strcmp(input, "East") == 0) {
				col++;
			}
			else if(strcmp(input, "West") == 0) {
				col--;
			}
			else {
				std::cout << "Incorrect Input" << std::endl;
			}

			currentRoom = rooms[row][col];
		}
		else if(strcmp(input, "PICKUP") == 0) {
			// Check if the room has items and if it does then let the player select one
		}
		else if(strcmp(input, "FIGHT") == 0) {
			// Check if there are enemies in the room and if there are then let the player fight them
		}

		if(currentRoom == rooms[1][0]) {
			std::cout << "YOU WIN" << std::endl;
			return 1;
		}
	}
}
