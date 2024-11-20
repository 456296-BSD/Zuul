// 	__          __                                _     
// 	\ \        / /                               | |    
// 	 \ \  /\  / /__  __ _ _ __   ___  _ __       | |__  
// 	  \ \/  \/ / _ \/ _` | '_ \ / _ \| '_ \      | '_ \
// 	   \  /\  /  __/ (_| | |_) | (_) | | | |  _  | | | |
// 	    \/  \/ \___|\__,_| .__/ \___/|_| |_| (_) |_| |_|
// 	                     | |                            
// 	                     |_|                            
//
//	Weapon child class declaration
//
//	By: Sawyer Scheve
//
//	Last Edited: 11/19/2024
//

#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"

class Weapon : public Item {
private:
	int damage;
public:
	// Constructor
	Weapon(char* n, char* t, int d);

	// Getters
	int GetDamage();
};

#endif
