// 	__          __                                                 
// 	\ \        / /                                                 
// 	 \ \  /\  / /__  __ _ _ __   ___  _ __         ___ _ __  _ __  
// 	  \ \/  \/ / _ \/ _` | '_ \ / _ \| '_ \       / __| '_ \| '_ \
// 	   \  /\  /  __/ (_| | |_) | (_) | | | |  _  | (__| |_) | |_) |
// 	    \/  \/ \___|\__,_| .__/ \___/|_| |_| (_)  \___| .__/| .__/ 
// 	                     | |                          | |   | |    
// 	                     |_|                          |_|   |_|    
//
//	Weapon child class deffinition
//
//	By: Sawyer Scheve
//
//	Last Edited: 11/19/2024
//

#include "weapon.h"

Weapon::Weapon(char* n, char* t, int d) : Item(n, t) {
	this->damage = d;
}

int Weapon::GetDamage() {
	return damage;
}
