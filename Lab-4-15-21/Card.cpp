#include "Card.hpp"
#include <iostream>

using namespace std;

Card::Card(string name, int attack, int health, int cost, string type)
{
    this->name = name;
    this->attack = attack;
    this->health = health;
    this->cost = cost;
    this->type = type;
}

void Card::display()
{
    cout << "Name: " << this->name << endl;
    cout << "Attack: " << this->attack << endl;
    cout << "health: " << this->health << endl;
    cout << "Cost: " << this->cost << endl;
    cout << "Type: " << this->type << endl;
}

int Card::getHealth()
{
    return this->health;
}