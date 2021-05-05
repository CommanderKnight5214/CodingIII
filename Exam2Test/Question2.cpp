#include "LinkedList.hpp"

using namespace std;

void LinkedList::RangeOfCosts(LinkedList* ll, int Start, int End)
{
    int count = ll->getCount();
    int currCount = 0;
    LinkedList* NewList = new LinkedList();
    LinkedList* currNode = new Node();
    for(int i = 0; i < count; i++)
    {
        currNode = currNode->get(currCount);
        if(currNode->getCost() >= Start || currNode->getCost() <= End)
        {
            NewList->addEnd(currNode->getPayLoad());
        }
        currCount++;
    }
    return NewList->display();
}