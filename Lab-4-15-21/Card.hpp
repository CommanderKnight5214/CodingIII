#include <string>

using namespace std;

class Card
{
    private:
        string name;
        int attack;
        int health;
        int cost;
        string type;
    
    public:
        Card(string name, int attack, int health, int cost, string type);
        int getHealth();
        void display();
};