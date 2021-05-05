#include "Stack.hpp"

using namespace std;

void Stack::StackReverse(Stack* Stack)
{
    Stack* currNode = new Stack();
    Stack* temp = new Stack();
    for(int i = Stack->Length(); i >= 0; i--)
    {
        currNode = Stack->peek();
        temp->push(currNode); 
    }
    for(int i = 0; i < Stack.Length(); i++)
    {
        Stack->pop();
    }
    currNode = temp->peek();
    for(int i = 0; i < temp.Length(); i++)
    {
        currNode = temp->Peek();
        Stack->push(currNode);
    }
}