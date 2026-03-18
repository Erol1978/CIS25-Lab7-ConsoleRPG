#include <iostream>
#include "Player.h"
#include "Item.h"

using namespace std;

int main() {
    Player hero("Hero", 100);

    Item sword("Sword", 10);
    Item shield("Shield", 15);
    Item potion("Potion", 5);
    Item extra("Gold", 50);

    cout << endl;
    cout << "--- Adding items ---" << endl;

    hero.addItem(sword);
    hero.addItem(shield);
    hero.addItem(potion);
    hero.addItem(extra);

    cout << endl;
    cout << "--- Inventory ---" << endl;
    hero.showInventory();

    cout << endl;
    cout << "Total items: " << Item::getTotalItems() << endl;

    return 0;
}