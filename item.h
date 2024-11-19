// 	 _____ _                       _     
// 	|_   _| |                     | |    
// 	  | | | |_ ___ _ __ ___       | |__  
// 	  | | | __/ _ \ '_ ` _ \      | '_ \
// 	 _| |_| ||  __/ | | | | |  _  | | | |
// 	|_____|\__\___|_| |_| |_| (_) |_| |_|
//                                      
//	Item class declaration
//
//	By: Sawyer Scheve
//
//	Last Edited: 11/19/2024
//

#ifndef ITEM_H
#define ITEM_H

class Item {
protected:
	char* name;
	char* type;
public:
	// Constructor + Destructor
	Item(char* n, char* t);
	~Item();

	// Getters
	char* GetName();
	char* GetType();
};

#endif
