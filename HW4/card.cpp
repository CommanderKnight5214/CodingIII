#include "card.hpp"
#include <iostream>

using namespace std;

Card::Card(string name, string description, int mana_cost, int attack, int defense)
{
    this->name = name;
    this->description = description;
    this->mana_cost = mana_cost;
    this->attack = attack;
    this->defense = defense;
}

void Card::display()
{
    cout << "Card name: " << this->name << endl;
    cout << "Description: " << this->description << endl;
    cout << "Cost: " << this->mana_cost << endl;
    cout << "Attack: " << this->attack << endl;
    cout << "Defence: " << this->defense << endl;
}