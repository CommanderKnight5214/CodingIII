#include "Card.hpp"
#include "URL.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

int main(int argc, char** argv)
{
    URL* u1 = new URL("https://api.hearthstonejson.com/v1/25770/enUS/cards.json");
    string jsonString = u1->getContents();
    json parsedJson = json::parse(jsonString);
    Card* theCards[parsedJson.size()];

    if(parsedJson.is_array())
    {
        for(int i = 0; i < parsedJson.size(); i++)
        {
            json currValue = parsedJson[i];
            if(currValue.is_object())
            {
                string name = currValue.value("name", "N/A");
                int attack = currValue.value("attack", -1);
                int health = currValue.value("health", -1);
                int cost = currValue.value("cost", -1);
                string type = currValue.value("type", "N/A");
                if(type == "MINION")
                {
                    theCards[i] = new Card(name, attack, health, cost, type);
                    theCards[i]->display();
                }
                else
                {
                    continue;
                }
                
            }
            
        }
        for (int i = 0; i < parsedJson.size(); i++)
        {
            int tempSwap;
            int theFollower;
            for(int currStart = 1; currStart < parsedJson.size(); currStart++)
            {
                theFollower = currStart;
                while(theFollower > 0 && theCards[theFollower]->getHealth() < theCards[theFollower-1]->getHealth())
                {
                    theCards[tempSwap] = theCards[theFollower];
                    theCards[theFollower] = theCards[theFollower-1];
                    theCards[theFollower-1] = theCards[tempSwap];
                    theFollower--;
                }
            }
        }
        
    }
    cout << "Number of Cards: " << parsedJson.size() << endl;
    return 0;
}