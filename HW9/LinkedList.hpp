#include "Node.hpp"

class LinkedList
{
    private:
        Node *head;
        Node *tail;
        int RandomNumber;
        int count;
        int countIndex;

    public:
        LinkedList();
        void display();
        void addEnd(int value);
        void addFront(int value);
        void addAtIndex(int value, int index);
        int removeFront();
        int removeEnd();
        int removeAtIndex(int Index);
};