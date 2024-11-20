// 	 ______                                                   
// 	|  ____|                                                  
// 	| |__   _ __   ___ _ __ ___  _   _        ___ _ __  _ __  
// 	|  __| | '_ \ / _ \ '_ ` _ \| | | |      / __| '_ \| '_ \
// 	| |____| | | |  __/ | | | | | |_| |  _  | (__| |_) | |_) |
// 	|______|_| |_|\___|_| |_| |_|\__, | (_)  \___| .__/| .__/ 
// 	                              __/ |          | |   | |    
// 	                             |___/           |_|   |_|    
//	Enemy class deffinition
//
//	By: Sawyer Scheve
//
//	Last Edited: 11/20/2024
//

#include "enemy.h"

Enemy::Enemy(char* n, Weapon* w, int h) {
	this->name = n;
	this->weapon = w;
	this->health = h;
}

Enemy::~Enemy() {
	delete name;
	delete weapon;
}

char* Enemy::GetName() {
	return name;
}

int Enemy::GetHealth() {
	return health;
}

void Death(Room* r) {
	r->AddItem(weapon);
	delete this; // Doesn't Work
}
