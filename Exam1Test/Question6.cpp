#include "LinkedList.hpp"


using namespace std;

ll->DuplicateList();

int LinkedList::DuplicateList()
{
    Node* currnode = this->head;
    int index = this->count;
    for(int i = 0; i < index-1; i++)
    {
        if(index == 0)
        {
            addfront(currnode->getPayLoad)
            currnode = currnode->getNextNode();
        }
        else if(index == this->count)
        {
            addEnd(currnode->getPayload)
        }
        else
        {
            addAtIndex(currnode->getPayLoad, i)
            currnode = currnode->getNextNode();
        }
        
    }
}