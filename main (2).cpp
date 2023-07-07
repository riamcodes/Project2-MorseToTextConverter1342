//RIA MUKHERJI 48877496
//KEN HOWARD 1342
//NOTE: please make sure there are no line breaks or extra spaces when entering morse code for the ALPHA function or it won't work, but otherwise it works well
//BONUS ATTEMPTED no cstring library
#include <iostream>
#include "headers.h"
using namespace std;

int main() {

    //declare a string to pass to menuHandler
    string commandString;
    cout << "Enter in a command\n>";
    cin >> commandString;

    //End the program if the user enters EXIT
    if (menuHandler(commandString) == "quit"){
        exit(0);
    }

    return 0;
}// end main
