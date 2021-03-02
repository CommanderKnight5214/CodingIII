#include "Node.hpp"
#include <stdlib.h>

Node::Node(int payload)
{
    this->payload = payload;
    this->nextNode = NULL;
}

void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}

void Node::setNextNodeReverse(Node* n)
{
    this->nextNode = n-1;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}

Node* Node::getNextNodeReverse()
{
    return this->nextNode - 1;
}
        
int Node::getPayload()
{
    return this->payload;
}