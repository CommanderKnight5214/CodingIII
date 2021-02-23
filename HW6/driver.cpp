#include <iostream>
#include <string.h>

using namespace std;

string RemoveBrackets(string jsonString)
{
    int IntialSquareBracket = 0;
    int SquareBracketCount = 0;
    string temp = "";
    for(int i = 0; i < jsonString.length(); i++)
    {
        if(jsonString[i] == '[' && (IntialSquareBracket = 0))
        {
            temp = temp + ' ';
            IntialSquareBracket = 1;
            SquareBracketCount = SquareBracketCount + 1;
        }
        else if(jsonString[i] == '[' && IntialSquareBracket != 0)
        {
            temp = temp + jsonString[i];
            SquareBracketCount = SquareBracketCount + 1;
        }
        else if(jsonString[i] == ']' && SquareBracketCount > 1)
        {
            temp = temp + jsonString[i];
            SquareBracketCount = SquareBracketCount - 1;
        }
        else if(jsonString[i] == ']' && SquareBracketCount == 1)
        {
            temp = temp + jsonString[i];
        }
        else 
        {
            temp = temp + jsonString[i];
        }
        
    }
    temp = jsonString;
    return jsonString;
}

int main(int argc, char** argv)
{
    cout << "Hello World" << endl;
    string jsonString = "[{\"fname\":\"val1\", \"lname\": \"val2\", \"sums\":[1,2,3]},{\"fname\":\"val3\", \"lname\":\"val4\"}]";
    cout << RemoveBrackets(jsonString) << endl;
}    

