#include "Node.hpp"

class BinarySearch
{
    private:
        Node* Root;
        int count;
        int FoundDestination;
        int childType;
        int WalkThrough;
    
    public:
        BinarySearch();
        void VisitInOrder();
        void addInt(int value);
};