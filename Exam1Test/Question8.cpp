#include "LinkedList.hpp"


using namespace std;


int LinkedList::reverseList()
{
    int index = this->count;
    Node* currnode = this->tail;
    Node* ReverseList = NULL;
    for(int i = index-1; i < 0; i--)
    {
        currnode = currnode->getNextNode();
        ReverseList = ReverseList + currnode;
    }
    value2Return = ReverseList->getPayLoad();
    delete(ReverseList->getPayLoad());
    Return = value2Return;
}