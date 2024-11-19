// 	  _____                                      _     _                             
// 	 / ____|                                    | |   | |                            
// 	| |     ___  _ __  ___ _   _ _ __ ___   __ _| |__ | | ___        ___ _ __  _ __  
// 	| |    / _ \| '_ \/ __| | | | '_ ` _ \ / _` | '_ \| |/ _ \      / __| '_ \| '_ \
// 	| |___| (_) | | | \__ \ |_| | | | | | | (_| | |_) | |  __/  _  | (__| |_) | |_) |
// 	 \_____\___/|_| |_|___/\__,_|_| |_| |_|\__,_|_.__/|_|\___| (_)  \___| .__/| .__/ 
// 	                                                                    | |   | |    
// 	                                                                    |_|   |_|    
//	Consumable child class deffinition
//
//	By: Sawyer Scheve
//
//	Last Edited: 11/19/2024
//

#include "consumable.h"

Consumable::Consumable(char* n, char* t, int h) : Item(n, t) {
	this->healing = h;
}

int Consumable::GetHealing() {
	return healing;
}
