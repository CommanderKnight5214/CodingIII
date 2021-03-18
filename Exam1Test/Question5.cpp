#include "LinkedList.hpp"


using namespace std;

ll->RemoveOddNumbers

int LinkedList::RemoveOddNumbers()
{
    int index = getCount;
    for(int i = 0; i < index-1; i++)
    {
        if(getAtIndex(i)%2 != 0)
        {
            removeAtIndex(i);
        }
    }
}