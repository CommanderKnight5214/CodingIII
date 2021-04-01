#include "Tower.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

Tower::Tower()
{
    this->nextTower = NULL;
    this->top = NULL;
    this->count = 0;
}

Tower* Tower::getNextTower()
{
    return this->nextTower;
}

void Tower::setNextTower(Tower* n)
{
    this->nextTower = n;
}

Disk* Tower::pop()
{
    //remove the top element and return it or just return NULL if there is no top. 
    if(this->count == 0)
    {
        return NULL;
    }
    else
    {
        Disk* disk2return = this->top;
        this->top = disk2return->getNextDisk();
        disk2return->setNextDisk(NULL);
        this->count--;
        return disk2return; 
    }

}

Disk* Tower::peek()
{
    if(this->count == 0)
    {
        return NULL;
    }
    else
    {
        return this->top; 
    }
    
}

void Tower::display()
{
    //cout on each disks toString for the entire tower
    Disk* currDisk = this->top;
    while(currDisk)
    {
        cout << currDisk->toString() << endl;
        currDisk = currDisk->getNextDisk();
    }
}