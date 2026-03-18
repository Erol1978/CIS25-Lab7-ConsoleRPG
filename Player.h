#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Inventory.h"
using namespace std;

class Player {
private:
    string name;
    int health;
    Inventory inventory;

public:
    Player(string name, int health);
    ~Player();

    void showInventory() const;
    void addItem(const Item& item);
};

#endif