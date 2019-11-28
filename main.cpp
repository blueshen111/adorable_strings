// Jordan Steer-Furderer
// CIS 25
// This program will search a text file with a 1 string per line, and
// determine whether the string contains the letters "uwu", in that order, regardless of
// if there are other characters in between.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

   // This function tells how many strings are in the file.
    void wordCounter(){

        ifstream ifs("/Users/jordansteer/Desktop/my_string_per_line_file.txt");
        int words = 0;
        string word;
        while (ifs >> word){
            ++words;
        }

        cout << "This file contains " << words << " strings"<< endl;
    }



    bool stringIsAdorable(string currentLine){
        //cout << "-----------------------------" << endl;
        int currentPosition = 0;
        bool foundFirstU = false;
        for (int i = 0; i <= currentLine.length() - 1; i++){
            cout << currentLine[i] << endl;
            if (currentLine.at(i) == 'u'){
                // cout << "u found" << endl;
                currentPosition = i;
                foundFirstU = true;
                break;
            }

        } // end of for

        if (foundFirstU == false){
            return false;
        }
        cout << "passed first false" << endl;

    bool foundW = false;
    for (int i = currentPosition ; i <= currentLine.length()- 1; i++){

        if (currentLine.at(i) == 'w'){

                //  cout << "w found" << endl;
            currentPosition = i;
            foundW = true;
            break;
        }

                } // end of for
                if (foundW == false){
                return false;
                }
    cout << "passed second false" << endl;

                bool foundSecondU = false;
                for (int i = currentPosition; i <= currentLine.length() - 1; i++){

                    if (currentLine.at(i) == 'u'){
                cout << "u found" << endl;
                        currentPosition = i;
                        foundSecondU = true;
                        break;
                    }
                } // end of for
                if (foundSecondU == false){
                return false;
                }

return true;
    }


    int doTheFile(){

        const string INPUT_FILE = "/Users/jordansteer/Desktop/my_string_per_line_file.txt";
        const int LINES = 4;

        ifstream inputFile;
        inputFile.open(INPUT_FILE);
//      ofstream outputFile;
//    outputFile.open("/Users/jordansteer/Desktop/my_string_per_line_file.txt");

    //if (inputFile){
        int counter = 0;
        //int total;

        for (int line = 0; line < LINES; line++){
            string currentLine;
            getline(inputFile, currentLine);
            //cout << currentLine << endl;
            int currentPosition;

            bool isAdorable = stringIsAdorable(currentLine);

            if(isAdorable){
                counter = counter + 1;
            }


        }

//return "string is adorable";
//return counter;

//    cout << counter << " of the strings in the file are adorable" << endl;
        return counter;

    }


//    int doTheFile(){
//
//        const string INPUT_FILE = "/Users/jordansteer/Desktop/my_string_per_line_file.txt";
//        const int LINES = 4;
//
//        ifstream inputFile;
//        inputFile.open(INPUT_FILE);
////      ofstream outputFile;
////    outputFile.open("/Users/jordansteer/Desktop/my_string_per_line_file.txt");
//
//    //if (inputFile){
//        int counter = 0;
//        //int total;
//
//        for (int line = 0; line < LINES; line++){
//            string currentLine;
//            getline(inputFile, currentLine);
//
//            int currentPosition;
//        //theString = currentLine;
//
//        //int counter = 0;
//           // bool adorable = true;
//            while (true){
//
//                for (int i = 0; i <= currentLine.length() - 1; i++){
//
//                    if (currentLine.at(i) == 'u')//{
//                // cout << "u found" << endl;
//                        int i = currentPosition;
//                        break;
//                    //}
//
//                    if (i = currentLine.length() - 1 && currentLine.at(i) != 'u'){
//                        return false;
//                    }
//                } // end of for
//
//
//                for (int i = currentPosition ; i <= currentLine.length()- 1; i++){
//
//                    if (currentLine.at(i) == 'w')//{
//
//                //  cout << "w found" << endl;
//                        int i = currentPosition;
//                        break;
//                    //}
//
//                    if (i = currentLine.length() - 1 && currentLine.at(i) != 'w'){
//                        return false;
//                    }
//                } // end of for
//
//
//                for (int i = currentPosition; i <= currentLine.length() - 1; i++){
//
//                    if (currentLine.at(i) == 'u')//{
//               // cout << "u found" << endl;
//                        i = currentPosition;
//                        break;
//                    //}
//
//                    if (i = currentLine.length() - 1 && currentLine.at(i) != 'u'){
//                        return false;
//                    }
//                } // end of for
//
//            } // while brace
////return "string is adorable";
//            counter = counter + 1;
////return counter;
//        }
////    cout << counter << " of the strings in the file are adorable" << endl;
//        return counter;
//
//    }




// Here is the function that decides if a string is adorable or not
// I am still trying to figure out how to place this function into
// the function that loops through the file.
    bool isItAdorable(string theString){
       // string theString;
        int currentPosition;

        for (int i = 0; i <= theString.length() ; i++){

            if (theString.at(i) =='u'){
               // cout << "u found" << endl;
                int i = currentPosition;
                break;
            }
        }

        for (int i = currentPosition ; i <= theString.length() ; i++){

            if (theString.at(i) == 'w'){

              //  cout << "w found" << endl;
                int i = currentPosition;
                break;
            }

        }

        for (int i = currentPosition; i <= theString.length() ; i++){

            if (theString.at(i) == 'u'){
               // cout << "u found" << endl;
                i = currentPosition;
                break;

            }

        }

        return true;

    }


int main()
{


// ifstream myFile;
// myFile.open("text.txt");
//string myString = "underwaterunderpants";

//cout << isItAdorable(myString) << endl;

//cout << stringIsAdorable(myString);

//adorability();

//=wordCounter();

//cout << isAdorable();

cout << doTheFile();



    return 0;
}
