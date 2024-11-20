// 	  ____                  _                          
// 	 / __ \                | |                         
// 	| |  | |_   _  ___  ___| |_        ___ _ __  _ __  
// 	| |  | | | | |/ _ \/ __| __|      / __| '_ \| '_ \
// 	| |__| | |_| |  __/\__ \ |_   _  | (__| |_) | |_) |
// 	 \___\_\\__,_|\___||___/\__| (_)  \___| .__/| .__/ 
// 	                                      | |   | |    
// 	                                      |_|   |_|    
//	
//	Quest item child class deffinition
//
//	By: Sawyer Scheve
//
//	Last Edited: 11/20/2024
//

#include "quest.h"

Quest::Quest(char* n, char* t, char* d) : Item(n, t) {
	this->description = d;
}

Quest::~Quest() {
	delete description;
}

char* Quest::GetDescription() {
	return description;
}
