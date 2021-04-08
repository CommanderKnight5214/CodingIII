#include "Node.hpp"
#include <stdlib.h>

Node::Node(int payload, int leftChild, int rightChild)
{
    this->payload = payload;
    this->leftChildNextNode = NULL;
    this->rightChildNextNode = NULL;
    this->nextNode = NULL;
    this->leftChild = NULL;
    this->rightChild = NULL;
}
/*
void Node::setRightChildNextNode(Node* n)
{
    this->rightChildNextNode = n;
}

void Node::setLeftChildNextNode(Node* n)
{
    this->leftChildNextNode = n;
}
*/
void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}
/*
Node* Node::getLeftChildNextNode()
{
    return this->leftChildNextNode;
}

Node* Node::getRightChildNextNode()
{
    return this->rightChildNextNode;
}
*/
Node* Node::getNextNode()
{
    return this->nextNode; 
}
        
int Node::getPayload()
{
    return this->payload;
}

int Node::leftChildvalidate()
{
    return this->leftChild = true;
}

int Node::rightChildvalidate()
{
    return this->rightChild = true;
}

int Node::leftChildCancel()
{
    return this->leftChild = false;
}

int Node::rightChildCancel()
{
    return this->rightChild = false;
}

int Node::leftChildStatus()
{
    return this->leftChild;
}

int Node::rightChildStatus()
{
    return this->rightChild;
}