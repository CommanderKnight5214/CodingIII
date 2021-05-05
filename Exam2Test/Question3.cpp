#include <iostream>
#include <stdlib.h> 

using namespace std;

int PrintByTime(string string, int TimesBlank)
{
    int Finish = 0;
    if(TimesBlank == Finish)
    {
        cout << "Your Function is Complete." << endl;
    }
    else
    {
        cout << string << endl;
        int temp = TimesBlank--;
        PrintByTime(string, temp);
    }
}