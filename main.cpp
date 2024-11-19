//	 ______           _ 
//	|___  /          | |
//	   / /_   _ _   _| |
//	  / /| | | | | | | |
//	 / /_| |_| | |_| | |
//	/_____\__,_|\__,_|_|
//
//	Zuul text based adventure game
//
//	By: Sawyer Scheve
//
//	Last Edited: 11/19/2024
//

#include "room.h"
#include "weapon.h"
#include "consumable.h"

int main() {
	Item* item = new Item("Item", "NA");
	Weapon* weapon = new Weapon("Weapon", "Weapon", 10);
	Consumable* hp = new Consumable("hp", "hp", 10);
	Room* room = new Room("This Is a Room.");
	room->AddExit("North");
	room->AddItem(item);
	room->AddItem(weapon);
	room->AddItem(hp);
	room->Describe();
}
