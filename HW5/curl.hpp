#include <string>

using namespace std;

class URL
{
    private:
        //Intial object
        string url;

    public:
        //Intial class
        URL(string url);
        //getContents(Method)
        string getContents(string url);
};