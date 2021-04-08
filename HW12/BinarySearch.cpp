#include "BinarySearch.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std; 

BinarySearch::BinarySearch()
{
    this->Root = NULL;
    this->count = 0;
    this->FoundDestination = 0;
    this->childType == NULL;
    this->WalkThrough = 0;
}

void BinarySearch::addInt(int value)
{
    Node* valueToAdd = new Node(value);
    if(count == 0)
    {
        valueToAdd->setNextNode(this->Root);
        this->Root = valueToAdd;
        this->Root->leftChildCancel();
        this->Root->rightChildCancel();
        this->count++;
    }
    else
    {
        Node* currNode = this->Root;
        while(this->FoundDestination == 0)
        {
            if(valueToAdd->getPayload() <= currNode->getPayload())
            {
                if(currNode->leftChildStatus() == false)
                {
                    currNode->leftChildvalidate();
                    currNode->setNextNode(valueToAdd->getNextNode());
                    currNode->leftChildCancel();
                    currNode->rightChildCancel();
                    this->count++;
                    this->FoundDestination++;
                }

                else
                {
                    currNode->getNextNode();
                }
            }
            else if(valueToAdd->getPayload() > currNode->getPayload())
            {
                if(currNode->rightChildStatus() == false)
                {
                    currNode->rightChildvalidate();
                    currNode->setNextNode(valueToAdd->getNextNode());
                    currNode->leftChildCancel();
                    currNode->rightChildCancel();
                    this->count++;
                    this->FoundDestination++;
                }
                else
                {
                    currNode->getNextNode();
                }
            }
        }
    }
    this->FoundDestination--;
}

void BinarySearch::VisitInOrder()
{
    Node* currNode = this->Root;
    while(WalkThrough == 0)
    {
        currNode->getNextNode();
        if(currNode->leftChildStatus() == false)
        {
            cout << currNode << endl;
        }
    }
}