#include "Disk.hpp"

class Tower
{
    private:
        Tower* nextTower;
        Disk* top;
        int count;

    public:
        Tower();
        Disk* pop();
        Disk* peek();
        Tower* getNextTower();
        void setNextTower(Tower* n);
        void push(Disk* d);
        void display();
};