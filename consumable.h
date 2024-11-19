// 	  _____                                      _     _            _     
// 	 / ____|                                    | |   | |          | |    
// 	| |     ___  _ __  ___ _   _ _ __ ___   __ _| |__ | | ___      | |__  
// 	| |    / _ \| '_ \/ __| | | | '_ ` _ \ / _` | '_ \| |/ _ \     | '_ \
// 	| |___| (_) | | | \__ \ |_| | | | | | | (_| | |_) | |  __/  _  | | | |
// 	 \_____\___/|_| |_|___/\__,_|_| |_| |_|\__,_|_.__/|_|\___| (_) |_| |_|
//
//	Consumable child class declaration
//
//	By: Sawyer Scheve
//
//	Last Edited: 11/19/2024
//

#include "item.h"

class Consumable : public Item {
private:
	int healing;
public:
	// Constructor
	Consumable(char* n, char* t, int h);

	// Getters
	int GetHealing();
};
