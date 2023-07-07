#include "headers.h"

//declare cstring to hold values in as global variable
// This will be used as arguments for functions parameters in ConvertToMorse
const int MAX_MORSE = 250;
const int MAX_ALPHA = 1000;
char a[MAX_MORSE];
char b[MAX_ALPHA];

// function menuHandler with parameter
// @param s, string parameter
// @return returnString, returns either empty or quit when ready
//This counts as my PASS BY VALUE and NON-VOID FUNCTION
string menuHandler(string s) {
    string returnString = "";

    while (true) {
        if (s == "ALPHA") {
           cout << convertToAlpha(b,MAX_ALPHA);

        }
        else if (s == "MORSE"){
            convertToMorse(a,MAX_MORSE);

        }
        else if (s == "EXIT"){
            returnString = "quit";
            break;
        }
        else {
            cout << "Bad INPUT. Make sure to enter morse code without any extra spaces or line breaks. Try entering ALPHA, MORSE, or EXIT instead." << endl;
            //This statement here skips a line so it doesn't repeat the bad command message for each token entered
           cin.ignore(80, '\n');
           // cin.clear();
        }
        cout << endl;
        cout << "Enter in a command\n>";
        cin >> s;
    }// end true
    return returnString;
}

//void function convertToMorse contains no parameters and converts the alphabetical input entered by the user into morse
// @param char a[] pass in a cstring to be edited
// @param int max for size of char array
//THIS IS MY PASS BY REFERENCE
void convertToMorse(char a[], int max) {

    //printed user instruction statement
   cout <<  "Enter in alpha characters to be converted to morse code: \n" << endl;

    //flush out cin and collect user input
    cin.ignore();
    cin.getline(a, max);

    cout << endl;

    //loop through the string for every single index of cstring converting alphabetical value to morse
    for (int i = 0; i < myStrlen(a); i++) {
        switch (a[i]) {
            case 'A':
            case 'a':
                cout << ".- ";
                break;
            case 'B':
            case 'b':
                cout << "-... ";
                break;
            case 'C':
            case 'c':
                cout << "-.-. ";
                break;
            case 'D':
            case 'd':
                cout << "-.. ";
                break;
            case 'E':
            case 'e':
                cout << ". ";
                break;
            case 'F':
            case 'f':
                cout << "..-. ";
                break;
            case 'G':
            case 'g':
                cout << "--. ";
                break;
            case 'H':
            case 'h':
                cout << ".... ";
                break;
            case 'I':
            case 'i':
                cout << ".. ";
                break;
            case 'J':
            case 'j':
                cout << ".--- ";
                break;
            case 'K':
            case 'k':
                cout << "-.- ";
                break;
            case 'L':
            case 'l':
                cout << ".-.. ";
                break;
            case 'M':
            case 'm':
                cout << "-- ";
                break;
            case 'N':
            case 'n':
                cout << "-. ";
                break;
            case 'O':
            case 'o':
                cout << "--- ";
                break;
            case 'P':
            case 'p':
                cout << ".--. ";
                break;
            case 'Q':
            case 'q':
                cout << "--.- ";
                break;
            case 'R':
            case 'r':
                cout << ".-. ";
                break;
            case 'S':
            case 's':
                cout << "... ";
                break;
            case 'T':
            case 't':
                cout << "- ";
                break;
            case 'U':
            case 'u':
                cout << "..- ";
                break;
            case 'V':
            case 'v':
                cout << "...- ";
                break;
            case 'W':
            case 'w':
                cout << ".-- ";
                break;
            case 'X':
            case 'x':
                cout << "-..- ";
                break;
            case 'Y':
            case 'y':
                cout << "-.-- ";
                break;
            case 'Z':
            case 'z':
                cout << "--.. ";
                break;
            case '.':
                cout << "! " << endl;
                break;
            case ' ':
                cout << "/ ";
                break;
        }//end switch
    }//end for
}// end convertToMorse

//converts morse code to alphabetical letters
//takes a char array and turns it into a string array
//@param char b[] character array
//@param max
//@return returnString with sentence val
string convertToAlpha(char b[], int max) {

    string returnString = "";
    string string2 = "";

    //this int will be used to declare a new string array size. The one comes because there needs to be one more space than words to keep the counts aligned
    int wordArraySize = 1;

    //wordArray counter to keep the index of my array correct when populating with words
    int wordArrayCounter = 0;

    //printed user instruction statement
    cout <<  "Enter in morse code to be converted to alpha characters\n" << endl;

    //flush out cin and collect user input
    cin.ignore();
    cin.getline(b, max);

    //making a loop that goes through every element and finds all the spaces between the morse code.
    //This is how to find the length for a string array
   for (int i = 0; i < myStrlen(b); i++) {
   if (b[i] == ' ') {
       wordArraySize++;
   }// end if
   }// end for that counts for wordArray Size

   //declare a string array for my new strings with the wordArraySize
   string wordArray[wordArraySize];

    //it will then convert the chars into a string and populate wordArray.
   for (int j = 0; j < myStrlen(b); j++) {
       if (b[j] != ' ') {
           string2 += b[j];
       }//end if
        else if(b[j] == ' '){
            wordArray[wordArrayCounter] =  string2;
            wordArrayCounter ++;
            string2 ="";
       }// end else if
   }//end for

    cout << endl;
   //it ignores the very last char entered in the array which should always be an exclamation
   for (int i = 0; i < (wordArraySize-1) ; i++) {
       if (wordArray[i] == ".-")
       {
          // cout << "a";
          returnString+="a";
       }
       else if (wordArray[i] == "-...")
       {
           returnString+="b";
       }
       else if (wordArray[i] == "-.-.")
       {
           returnString+= "c";
       }
       else if (wordArray[i] == "-..")
       {
           returnString+= "d";
       }
       else if (wordArray[i] == ".")
       {
           returnString+= "e";
       }
       else if (wordArray[i] == "..-.")
       {
           returnString+= "f";
       }
       else if (wordArray[i] == "--.")
       {
           returnString+= "g";
       }
       else if (wordArray[i] == "....") {
           returnString += "h";
       }
       else if (wordArray[i] == "..")
       {
           returnString+= "i";
       }
       else if (wordArray[i] == ".---")
       {
           returnString+= "j";
       }
       else if (wordArray[i] == "-.-")
       {
           returnString+= "k";
       }
       else if (wordArray[i] == ".-..")
       {
           returnString+= "l";
       }
       else if (wordArray[i] == "--")
       {
           returnString+= "m";
       }
       else if (wordArray[i] == "-.")
       {
           returnString+= "n";
       }
       else if (wordArray[i] == "---")
       {
           returnString+= "o";
       }
       else if (wordArray[i] == ".--.")
       {
           returnString+= "p";
       }
       else if (wordArray[i] == "--.-")
       {
           returnString+= "q";
       }
       else if (wordArray[i] == ".-.")
       {
           returnString+= "r";
       }
       else if (wordArray[i] == "...")
       {
           returnString+= "s";
       }
       else if (wordArray[i] == "-")
       {
           returnString+= "t";
       }
       else if (wordArray[i] == "..-")
       {
           returnString+= "u";
       }
       else if (wordArray[i] == "...-")
       {
           returnString+= "v";
       }
       else if (wordArray[i] == ".--")
       {
           returnString+= "w";
       }
       else if (wordArray[i] == "-..-")
       {
           returnString+= "x";
       }
       else if (wordArray[i] == "-.--")
       {
           returnString+= "y";
       }
       else if (wordArray[i] == "--..")
       {
           returnString+= "z";
       }
       else if (wordArray[i] == "/")
       {
           returnString+= " ";
       }

   }
   //replace the constant exclamation mark
    returnString+= ".";
   return returnString + "\n";

}// end convertToALPHA

//create my own strlen for char arrays by counting what chars arent the '\0' delimeter
int myStrlen(char c[]) {
    int i = 0;
    int count = 0;
    while (c[i] != '\0') {
        count++;
        i++;
    }

    return count;
}