// 	  ____                  _         _     
// 	 / __ \                | |       | |    
// 	| |  | |_   _  ___  ___| |_      | |__  
// 	| |  | | | | |/ _ \/ __| __|     | '_ \
// 	| |__| | |_| |  __/\__ \ |_   _  | | | |
// 	 \___\_\\__,_|\___||___/\__| (_) |_| |_|
//	
//	Quest item child class declaration
//
//	By: Sawyer Scheve
//
//	Last Edited: 11/20/2024
//

#include "item.h"

class Quest : public Item {
private:
	char* description;
public:
	// Constructor + Destructor
	Quest(char* n, char* t, char* d);
	~Quest();

	// Getters
	char* GetDescription();
};
