#include <iostream>
#include "Tower.hpp"
#include "Game.hpp"

using namespace std;

int main(int argc, char** argv)
{
    Disk* d1 = new Disk(1);
    Disk* d2 = new Disk(2);
    Disk* d3 = new Disk(3);

    Tower* t1 = new Tower();
    t1->push(d3);
    t1->push(d2);
    t1->push(d1);
    Tower* t2 = new Tower();
    Tower* t3 = new Tower();

    //Creates a new game of three towers
    Game* G1 = new Game(); 
    G1->push(t3);
    G1->push(t2);
    G1->push(t1);
    G1->display();
    /*
    cout << d1->toString() << endl;
    cout << d2->toString() << endl;
    cout << d3->toString() << endl;
    */
    return 0;
}