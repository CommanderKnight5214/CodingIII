#include "Tower.hpp"
#include "Game.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

Game::Game()
{
    this->count = 0;
    this->TowerTop = NULL;
}

void Game::push(Tower* d)
{
    //Pushs towers to game.

    d->setNextTower(this->TowerTop);
    this->TowerTop = d;
    count++; 
}

void Game::display()
{
    //displays game
    //cout on each disks toString for the entire tower
    Tower* currTower = this->TowerTop;
    while(currTower)
    {
        cout << currTower << endl;
        currTower = currTower->getNextTower();
    }
}
