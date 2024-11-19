//	 _____                                              
//	|  __ \
//	| |__) |___   ___  _ __ ___         ___ _ __  _ __  
//	|  _  // _ \ / _ \| '_ ` _ \       / __| '_ \| '_ \
//	| | \ \ (_) | (_) | | | | | |  _  | (__| |_) | |_) |
//	|_|  \_\___/ \___/|_| |_| |_| (_)  \___| .__/| .__/ 
//	                                        | |   | |    
//	                                        |_|   |_|    
//	Room class deffinition
//
//	By: Sawyer Scheve
//
//	Last Edited: 11/19/2024
//

#include "room.h"

Room::Room(char* d) {
	this->description = d;
}

void Room::Describe() {
	std::cout << description << std::endl << "There are " << exits.size() << " Exit(s): ";

	for(int i = 0; i < exits.size(); i++) {
		std::cout << exits[i] << " ";
	}

	std::cout << std::endl << "There are " << items.size() << " Item(s): ";

	for(int i = 0; i < items.size(); i++) {
		std::cout << items[i]->GetName() << "[" << items[i]->GetType() << "]" << " ";
	}
	
	std::cout << std::endl;
}

void Room::AddExit(char* e) {
	exits.push_back(e);
}

void Room::AddItem(Item* i) {
	items.push_back(i);
}
