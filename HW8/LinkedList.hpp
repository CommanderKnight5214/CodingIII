#include "Node.hpp"

class LinkedList
{
    private:
        Node* head;
        Node* tail;
        Node* temp;
        int count;

    public:
        LinkedList();
        void display();
        void addEnd(int value);
        void addFront(int value);
        int removeFront();
        int removeEnd();
};