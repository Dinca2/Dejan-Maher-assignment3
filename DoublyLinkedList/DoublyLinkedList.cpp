#include "DoubleLinkedList.h"

DoubleLinkedList::DoublyLinkedList() {
//Post-Condition: the list is created. 
}

DoubleLinkedList::~DoublyLinkedList() {
//Pre-Condition: the list is created. 
//Post-Condition: all nodes are freed. 
}

void DoubleLinkedList::insertItem(DoubleLinkedList::T &item) 
//Pre-Condition: the list exists and item is initialized 
//Post-Condition: the item is inserted into the list, maintaining sorted order.  
}
 
void DoubleLinkedList::deleteItem(DoubleLinkedList::T &item) { 
//Pre-Condition: the list exists and item is initialized. 
//Post-Condition: the node that contains item is removed from the list. If the item is 
//not present in the list, print the message that is shown in the example output. 
}
 
int DoubleLinkedList::lengthIs() const {
//Pre-Condition: the list exists. 
//Post-Condition: return the length instance variable. 
}
 
void DoubleLinkedList::print() {  
//Pre-Condition: the list exists. 
//Post-Condition: items in the list are printed to standard output. 
}
 
void DoubleLinkedList::printReverse() {  
//Pre-Condition: the list exists. 
//Post-Condition: items in the list are printed to standard output in reverse order. 
}

void DoubleLinkedList::deleteSubsection(int upperBound, int lowerBound) {

}

DoubleLinkedList::T DoubleLinkedList::mode() {

}

void DoubleLinkedList::swapAlternate() {

}


template class DoublyLinkedList<int>; 
template class DoublyLinkedList<float>; 
template class DoublyLinkedList<string>;
