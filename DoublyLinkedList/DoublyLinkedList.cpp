#include "DoublyLinkedList.h"

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() {
//Post-Condition: the list is created.
    head = NULL;
    tail = NULL;
    length = 0;
} //DoublyLinkedList

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
//Pre-Condition: the list is created.
//Post-Condition: all nodes are freed.
    NodeType<T> *tempBack;
    while(tail->back != NULL) {
        tempBack = tail->back;
        *tail = *tail->back;
        delete tempBack;
    } //while
} //~DoublyLinkedList

template <typename T>
void DoublyLinkedList<T>::insertItem(T &item) {
//Pre-Condition: the list exists and item is initialized
//Post-Condition: the item is inserted into the list, maintaining sorted order.

    NodeType<T> *newNode = new NodeType<T>();
    NodeType<T> *location = head;
    newNode->data = item;

    bool found = false;

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    } else if(head->data > newNode->data) {
        newNode->next = head;
        newNode->next->back = newNode;
        head = newNode;
    } else {
         //repeats until location to insert is found
        while((location->next != NULL) && (location->next->data < newNode->data)) {
            location = location->next;
        }
        newNode->next = location->next;
        if(location->next != NULL) {
            newNode->next->back = newNode;
        } else {
            tail = newNode;
        }

        location->next = newNode;
        newNode->back = location;
    } //if
    length++;
} //insert
template <typename T>
void DoublyLinkedList<T>::deleteItem(T &item) {
//Pre-Condition: the list exists and item is initialized.
//Post-Condition: the node that contains item is removed from the list. If the item is
//not present in the list, print the message that is shown in the example output.
    NodeType<T> *location = head;
    NodeType<T> *tempLocation = NULL;

    bool found = false;
    if(head == NULL) {
        cout << "List is empty" << endl;
    } else if(head->data == item) {
        tempLocation = head;
        if(head->next != NULL) {
            head->next->back = NULL;
            head = head->next;
        } else {
            head = NULL;
        } //if
        length--;
    } else if(tail->data == item) {
        tempLocation = tail;
        tail->back->next = NULL;
        tail = tail->back;
        length--;
    } else {

        while (location != NULL && (!(item == location->data))) {
            tempLocation = location;
            location = location -> next;
        } //while

        if (location == NULL) {
            cout << "Item not found" << endl;
            return;
        } //if

        tempLocation -> next = location -> next;
        location -> next -> back = tempLocation;
    } //else
    delete location;
    length--;

    if(head != NULL && location->next != NULL && location->next->data == item) {
        deleteSubsection(item, item); //deletes duplicates
    } //if
} //deleteItem

template <typename T>
int DoublyLinkedList<T>::lengthIs() const {
//Pre-Condition: the list exists.
//Post-Condition: return the length instance variable.
    return length;
}

template <typename T>
void DoublyLinkedList<T>::print() {
//Pre-Condition: the list exists.
//Post-Condition: items in the list are printed to standard output.

    NodeType<T> *location = head;
    for(int l = 0; l < length; l++) {
        cout << location->data << " " << flush;
        if(location->next != NULL) {
            location = location->next;
        } //if
    } //for
    cout << "\n";
} //print

template <typename T>
void DoublyLinkedList<T>::printReverse() {
//Pre-Condition: the list exists.
//Post-Condition: items in the list are printed to standard output in reverse order.
    NodeType<T> *location = tail;
    for(int l = length; l > 0; l--) {
        cout << location->data << " ";
        if(location->back != NULL) {
            location = location->back;
        } //if
    } //for
    cout << "\n";
}

template <typename T>
void DoublyLinkedList<T>::deleteSubsection(T upperBound, T lowerBound) {

    NodeType<T> *location = head;
    NodeType<T> *tempLoc;
    while(location->data < lowerBound && location->next != NULL) {
        location = location->next;
    } //while

    while(location->data <= upperBound && location->next != NULL) {
        tempLoc = location;
        if(location->back != NULL && location->next != NULL) {
            location->back->next = location->next;
            location->next->back = location->back;
        } else if(location->next != NULL) {
            location->next->back = NULL;
            head = head->next;
        } else if(location->back != NULL) {
            location->back->next = NULL;
            tail = tail->back;
        }

        location = location->next;
        delete tempLoc;
        length--;
    } //while
    if(location->data <= upperBound && location->next == NULL) {
        if(location->back != NULL) {
            location->back->next = NULL;
        }
        length--;
        delete location;
    }
    if(length == 0) {
        head = NULL;
    } //if
}

template <typename T>
T DoublyLinkedList<T>::mode() {

    NodeType<T> *location = head;
    T mode = location->data;
    int count = 1, modeCount = 0;
    while(location->next != NULL) {
        if(location->data == mode) {
            modeCount++;
        } else if(location->data == location->next->data) {
            count++;
        } else {
            count = 1;
        } //if

        if(count > modeCount) {
            mode = location->data;
            modeCount = count;
            count = 1;
        } //if
        location = location->next;
    }

    return mode;
}

template <typename T>
void DoublyLinkedList<T>::swapAlternate() {
    NodeType<T> *location = head;
    NodeType<T> *nextPair;
    NodeType<T> *nextLoc;
    T tempData;
    while(location->next != NULL) {
        if(location->next->next != NULL) {
            nextPair = location->next->next;
            nextLoc = location->next;
            tempData = location->data;
            location->data = nextLoc->data;
            nextLoc->data = tempData;
            location = nextPair;
        } else { //if
            location = location->next;
        }
    } //while


}


template class DoublyLinkedList<int>;
template class DoublyLinkedList<float>;
template class DoublyLinkedList<string>;
