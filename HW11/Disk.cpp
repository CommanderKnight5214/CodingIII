#include "Disk.hpp"
#include <stdlib.h>
#include <string>

Disk::Disk(int size)
{
    this->size = size;
    this->nextDisk = NULL;
}

int Disk::getSize()
{
    return this->size;
}

Disk* Disk::getNextDisk()
{
    return this->nextDisk;
}

void Disk::setNextDisk(Disk* n)
{
    this->nextDisk = n;
}

std::string Disk::toString()
{
    //return a string that has a number of = that is twice the size
    std::string answer = "";
    for(int i = 0; i < this->size; i++)
    {
        answer += "==";
    }
    return answer;
}
