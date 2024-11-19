// 	 _____ _                                        
// 	|_   _| |                                       
// 	  | | | |_ ___ _ __ ___         ___ _ __  _ __  
// 	  | | | __/ _ \ '_ ` _ \       / __| '_ \| '_ \
// 	 _| |_| ||  __/ | | | | |  _  | (__| |_) | |_) |
// 	|_____|\__\___|_| |_| |_| (_)  \___| .__/| .__/ 
// 	                                   | |   | |    
// 	                                   |_|   |_|    
//	Item class deffinition
//
//	By: Sawyer Scheve
//
//	Last Edited: 11/19/2024
//

#include "item.h"

Item::Item(char* n, char* t) {
	this->name = n;
	this->type = t;
}

Item::~Item() {
	delete name;
	delete type;
}

char* Item::GetName() {
	return name;
}

char* Item::GetType() {
	return type;
}
