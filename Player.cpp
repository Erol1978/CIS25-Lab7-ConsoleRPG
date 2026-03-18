#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(string name, int health)
    : name(name), health(health), inventory(5) {
    cout << "Default constructor called for Player." << endl;
}

Player::~Player() {
    cout << "Player " << name << " has been destroyed." << endl;
}

void Player::showInventory() const {
    inventory.display();
}

void Player::addItem(const Item& item) {
    if (inventory.addItem(item)) {
        cout << name << " found a ";
        item.display();
        cout << endl;
    }
}