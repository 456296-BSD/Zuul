// 	 _____                             _     
// 	|  __ \                           | |    
// 	| |__) |___   ___  _ __ ___       | |__  
// 	|  _  // _ \ / _ \| '_ ` _ \      | '_ \
// 	| | \ \ (_) | (_) | | | | | |  _  | | | |
// 	|_|  \_\___/ \___/|_| |_| |_| (_) |_| |_|
//       
// 	Room class declaration
//
// 	By: Sawyer Scheve
//
// 	Last Edited: 11/19/2024
//

#include <vector>
#include <iostream>

#include "item.h"

class Room {
private:
	std::vector<char*> exits;
	std::vector<Item*> items;
	// std::vector<Enemy*> enemies;
	char* description;
public:
	// Constructor
	Room(char* d);
	void Describe(); // Describes the room (Exits, Items, Enemies, Etc)
	void AddExit(char* e); // Add an exit
	void AddItem(Item* i); // Add an item
	// void AddEnemy(char* e); // Add an enemy
};
