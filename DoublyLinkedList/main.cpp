#include "DoublyLinkedList.h"
#include <iostream>
#include <string>
#include <cstdio>
#include <sstream>
#include <fstream>

using namespace std;

//function calls
template<class T>
void promptS(DoublyLinkedList<T>);
template<class T>
void promptI(DoublyLinkedList<T>);
template<class T>
void promptF(DoublyLinkedList<T>);

//main
int main(int argc, char *argv[]) {

    cout << "Enter list type (i - int, f - float, s - std:string): ";

    string type;
    getline(cin, type);

    ifstream file;
    file.open(argv[1]);

    //int, float, string instantiations
    if (0 == type.compare("i")) {
        DoublyLinkedList<int> intL;

        int input;

        while (file >> input) {
            intL.insertItem(input);
        }

        file.close();

        promptI(intL);

    } else if(0 == type.compare("f")) {
        DoublyLinkedList<float> floatL;

        float input;

        while (file >> input) {
            floatL.insertItem(input);
        }

        file.close();

        promptF(floatL);

    } else if(0 == type.compare("s")) {
        DoublyLinkedList<string> stringL;

        string input;

        while (file >> input) {
            stringL.insertItem(input);
        }

        file.close();

        promptS(stringL);
    }
    return EXIT_SUCCESS;
}

//prompts for each type of data
template<class T>
void promptS(DoublyLinkedList<T> stringLP) {

    string commandLine = "";
    char command = ' ';
    bool stop = false;
    cout << "insert (i), delete (d), length (l), print (p),";
    cout << "deleteSub (b), mode (m), printReverse(r), swapAlt (s), quit (q)" << endl;


    while (!stop) {
        cout << "Enter a command: ";

        getline(cin, commandLine);
        command = commandLine[0];

        if (command =='i') {

            cout << "Item to insert: ";
            string in;
            getline(cin, in);
            stringLP.insertItem(in);

        } else if (command == 'd') {

            cout << "Item to delete: ";
            string in;
            getline(cin, in);
            stringLP.deleteItem(in);

        } else if (command == 'l') {

            cout << "Length is: " << stringLP.lengthIs() << endl;

        } else if (command == 'p') {

            stringLP.print();

        } else if (command = 'b'){

            cout << "Please enter a lower bound: ";
            string lb;
            getline(cin, lb);
            cout << "Please enter an upper bound: ";
            string ub;
            getline(cin, ub);
            stringLP.deleteSubsection(lb, ub);

        } else if (command == 'm') {

            stringLP.mode();

        } else if (command == 'r') {

            stringLP.printReverse();

        } else if (command == 's') {

            stringLP.swapAlternate();
            stringLP.print();
            exit(0);

        } else if (command == 'q') {

            cout << "Quitting program..." << endl;
            stop = true;
        }
    }*/
        }

template<class T>
void promptI(DoublyLinkedList<T> intLP) {

    bool stop = false;
    string commandLine = "";
    char command =' ';

    cout << endl;
    cout << "insert (i), delete (d), length (l), print (p),";
    cout << "deleteSub (b), mode (m), printReverse(r), swapAlt (s), quit (q)" << endl;

    while (!stop) {

        cout << "Enter a command: ";
        getline(cin, commandLine);
        command = commandLine[0];

        if (command == 'i') {

            cout << "Item to insert: ";
            int in;
            cin >> in;
            intLP.insertItem(in);
            cout.flush();
        } else if (command == 'd') {

            cout << "Item to delete: ";
            int in;
            cin >> in;
            intLP.deleteItem(in);

        } else if (command == 'l') {

            cout << "Length is: " << intLP.lengthIs() << endl;

        } else if (command == 'p') {

            intLP.print();

        } else if (command == 'b'){

            cout << "Please enter a lower bound: ";
            int lbi;
            cin >> lbi;
            cout << "Please enter an upper bound: ";
            int ubi;
            cin >> ubi;
            intLP.deleteSubsection(lbi, ubi);

        } else if (command == 'm') {

            intLP.mode();

        } else if (command == 'r') {

            intLP.printReverse();

        } else if (command == 's') {

            intLP.swapAlternate();
            intLP.print();
            exit(0);

        } else if (command == 'q') {

            cout << "Quitting program..." << endl;
            stop = true;
        }
    }
}

template<class T>
void promptF(DoublyLinkedList<T> floatLP) {

    string commandLine = "";
    char command = ' ';
    bool stop = false;
    cout << "insert (i), delete (d), length (l), print (p),";
    cout << "deleteSub (b), mode (m), printReverse(r), swapAlt (s), quit (q)" << endl;

    while (!stop) {

        cout << "Enter a command: ";

        getline(cin, commandLine);
        command = commandLine[0];

        if (command == 'i') {

            cout << "Item to insert: ";
            float in;
            cin >> in;
            floatLP.insertItem(in);

        } else if (command == 'd') {

            cout << "Item to delete: ";
            float in;
            cin >> in;
            floatLP.deleteItem(in);

        } else if (command == 'l') {

            cout << "Length is: " << floatLP.lengthIs() << endl;

        } else if (command == 'p') {

            floatLP.print();

        } else if (command == 'b'){

            cout << "Please enter a lower bound: ";
            float lbp;
            cin >> lbp;
            cout << "Please enter an upper bound: ";
            float ubp;
            cin >> ubp;
            floatLP.deleteSubsection(lbp, ubp);

        } else if (command == 'm') {

            floatLP.mode();

        } else if (command == 'r') {

            floatLP.printReverse();

        } else if (command == 's') {

            floatLP.swapAlternate();
            stop = true;

        } else if (command == 'q') {

            cout << "Quitting program..." << endl;
            stop = true;
        }
    }
}
