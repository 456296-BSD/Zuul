// 	 ______                                  _     
// 	|  ____|                                | |    
// 	| |__   _ __   ___ _ __ ___  _   _      | |__  
// 	|  __| | '_ \ / _ \ '_ ` _ \| | | |     | '_ \
// 	| |____| | | |  __/ | | | | | |_| |  _  | | | |
// 	|______|_| |_|\___|_| |_| |_|\__, | (_) |_| |_|
// 	                              __/ |            
// 	                             |___/            
//	Enemy class declaration
//
//	By: Sawyer Scheve
//
//	Last Edited: 11/20/2024
//

#ifndef ENEMY_H
#define ENEMY_H

#include "weapon.h"
#include "room.h"

class Enemy {
private:
	char* name;
	Weapon* weapon;
	int health;
public:
	// Constructor + Destructor
	Enemy(char* n, Weapon* w, int h);
	~Enemy();

	// Getters
	char* GetName();
	int GetHealth();

	// Method
	void Death();	
};

#endif
