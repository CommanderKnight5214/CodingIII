#include "card.hpp"
#include <iostream>

int main(int argc, char** argv)
{
    Card* Kul_Tiran_Chaplain = new Card("Kul Tiran Chaplain", "Battlecry: Give a friendly minion +2 Health.", 2, 2, 3);
    Card* Psychic_Conjurer = new Card("Psychic Conjurer", "Battlecry: Copy a card in your opponent's deck and add it to your hand.", 1, 1, 1);
    Card* Scarlet_Subjugator = new Card("Scarlet Subjugator", "Battlecry: Give an enemy minion -2 Attack until next turn.", 1, 2, 1);
    Card* Natalie_Seline = new Card("Natalie Seline", "Battlecry: Destroy a minion and gain its Health.", 8, 8, 1);
    cout << "Here is your Hearthstone Hand." << endl;
    cout << "" << endl;
    Kul_Tiran_Chaplain->display();
    cout << "" << endl;
    Psychic_Conjurer->display();
    cout << "" << endl;
    Scarlet_Subjugator->display();
    cout << "" << endl;
    Natalie_Seline->display();
    cout << "" << endl; 
}