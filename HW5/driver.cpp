#include "curl.hpp"
#include <iostream>

int main(int argc, char** argv)
{
    //This code should intialize the web address
    URL* u1 = new URL("http://www.google.com");
    URL* u2 = new URL("http://www.yahoo.com");

    //This code should allow the url to return objects from the url but is not working.
    cout << u1.getContents() << endl;
    cout << u2.getContents() << endl; 
}
