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
  NodeType<T> *tempNext;
  NodeType<T> *tempBack;
  for(int i = length; i > 0; i--) {
    tempNext = tail->next;
    tempBack = tail->back;
    *tail = *tail->back;
    delete tempNext;
    delete tempBack;
  } //for
  delete tail;
  delete head;
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
  } else if(head->data > newNode->data) {
      newNode->next = head;
      newNode->next->back = newNode;
      head = newNode;
  } else {
    while(!found) { //repeats until location to insert is found
      if((location->next != NULL) && (location->next->data < newNode->data)) {
	location = location->next;
      } else {
	found = true;
      } //if
    } //while

    newNode->next = location->next;
    if(location->next != NULL) {
      newNode->next->back = newNode;
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
}

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

  for(int l = 1; l <= length; l++) {
    cout << location->data << " ";
    if(location->next != NULL) {
      location = location->next;
    }
  }
  cout << endl;
}

template <typename T>
void DoublyLinkedList<T>::printReverse() {  
//Pre-Condition: the list exists. 
//Post-Condition: items in the list are printed to standard output in reverse order. 
}

template <typename T>
void DoublyLinkedList<T>::deleteSubsection(int upperBound, int lowerBound) {

}

template <typename T>
T DoublyLinkedList<T>::mode() {

  return head->data; 
}

template <typename T>
void DoublyLinkedList<T>::swapAlternate() {

}


template class DoublyLinkedList<int>; 
template class DoublyLinkedList<float>; 
template class DoublyLinkedList<string>;
