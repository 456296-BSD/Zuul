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
// 	Last Edited: 11/21/2024
//

#ifndef ROOM_H
#define ROOM_H

class Enemy;

#include <vector>
#include <iostream>

#include "item.h"
#include "enemy.h"

class Room {
private:
	std::vector<char*> exits;
	std::vector<Item*> items;
	std::vector<Enemy*> enemies;
	char* description;
public:
	// Constructor
	Room(char* d);
	
	// Customization
	void AddExit(char* e);
	void AddItem(Item* i);
	void AddEnemy(Enemy* e);

	// Methods
	void Describe();
	void CheckDead();
};

#endif
