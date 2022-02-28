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

    string type = "";
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

            stringstream sin;
            string cmd = "";
            string in = "";

            cout << "Item to insert: ";
            getline(cin, cmd);
            sin << cmd;
            sin >> in;

            stringLP.insertItem(in);

        } else if (command == 'd') {

            stringstream sin;
            string cmd = "";
            string in = "";

            cout << "Item to delete: ";
            getline(cin, cmd);
            sin << cmd;
            sin >> in;

            stringLP.deleteItem(in);

        } else if (command == 'l') {

            cout << "Length is: " << stringLP.lengthIs() << endl;

        } else if (command == 'p') {

            stringLP.print();

        } else if (command == 'b'){

            cout << "Please enter a lower bound: ";
            string lb = "";
            getline(cin, lb);
            cout << "Please enter an upper bound: ";
            string ub = "";
            getline(cin, ub);
            stringLP.deleteSubsection(ub, lb);

        } else if (command == 'm') {

            cout << "Mode is: " << stringLP.mode() << endl;

        } else if (command == 'r') {

            stringLP.printReverse();

        } else if (command == 's') {

            stringLP.swapAlternate();
            stringLP.print();
            stop = true;

        } else if (command == 'q') {

            cout << "Quitting program..." << endl;
            stop = true;
        }
    }
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
            stringstream item;
            string int1 = "";
            int num = 0;

            cout << "Item to insert: ";
            getline(cin, int1);
            item << int1;
            item >> num;

            intLP.insertItem(num);

        } else if (command == 'd') {

            stringstream item2;
            string int2 = "";
            int in = 0;

            cout << "Item to delete: ";
            getline(cin, int2);
            item2 << int2;
            item2 >> in;

            intLP.deleteItem(in);

        } else if (command == 'l') {

            cout << "Length is: " << intLP.lengthIs() << endl;

        } else if (command == 'p') {

            intLP.print();

        } else if (command == 'b'){

            stringstream delsub;
            stringstream delsub2;
            string del = "";
            int del1 = 0;
            int del2 = 0;

            cout << "Please enter a lower bound: ";

            getline(cin, del);
            delsub << del;
            delsub >> del1;

            cout << "Please enter an upper bound: ";

            del = "";
            getline(cin, del);
            delsub2 << del;
            delsub2 >> del2;

            intLP.deleteSubsection(del2, del1);

        } else if (command == 'm') {

            cout << "Mode is: " << intLP.mode() << endl;

        } else if (command == 'r') {

            intLP.printReverse();

        } else if (command == 's') {

            intLP.swapAlternate();
            intLP.print();
            stop = true;

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
            stringstream item;
            string flo1 = "";
            float num = 0;

            cout << "Item to insert: ";
            getline(cin, flo1);
            item << flo1;
            item >> num;

            floatLP.insertItem(num);

        } else if (command == 'd') {
            stringstream item3;
            string flo2 = "";
            float del = 0;

            cout << "Item to delete: ";
            getline(cin, flo2);
            item3 << flo2;
            item3 >> del;

            floatLP.deleteItem(del);

        } else if (command == 'l') {

            cout << "Length is: " << floatLP.lengthIs() << endl;

        } else if (command == 'p') {

            floatLP.print();

        } else if (command == 'b'){
            stringstream delsub;
            stringstream delsub2;
            string flodel = "";
            float del1 = 0;
            float del2 = 0;

            cout << "Please enter a lower bound: ";

            getline(cin, flodel);
            delsub << flodel;
            delsub >> del1;

            cout << "Please enter an upper bound: ";

            flodel = "";
            getline(cin, flodel);
            delsub2 << flodel;
            delsub2 >> del2;

            floatLP.deleteSubsection(del2, del1);

        } else if (command == 'm') {

            cout << "Mode is: " << floatLP.mode() << endl;

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
