#include "Tower.hpp"

class Game
{
    private:
        Tower* theTowers[3];
        Tower* TowerTop;
        int count;

    public:
        Game(); //setup our intial 3 towers with the disks on the far left
        void display(); //display the 3 towers on the screen, you can do this vertically
        int setUpGame();
        void push(Tower* d);
};