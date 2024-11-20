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
//	Last Edited: 11/20/2024
//

#include "room.h"
#include "weapon.h"
#include "consumable.h"
#include "quest.h"

int main() {
	Room* room = new Room("This Is a Room.");
	Item* item = new Item("Item", "NA");
	room->AddExit("North");
	room->AddItem(item);

	Weapon* enemyWeapon = new Weapon("Sword", "Weapon", 2);
	Enemy* enemy = new Enemy("Jorg", enemyWeapon, 10);
	room->AddEnemy(enemy);

	room->Describe();
}
