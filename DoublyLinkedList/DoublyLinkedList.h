#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

template<class T>
struct NodeType {
  T data; 
  NodeType<T> *next;   
  NodeType<T> *back;
};

template<class T>
class DoublyLinkedList {
private:
  
  NodeType<T> *head; 
  NodeType<T> *tail;
  int length;
  
public:
  
  DoublyLinkedList(); 
  //Post-Condition: the list is created. 
 
  ~DoublyLinkedList(); 
  //Pre-Condition: the list is created. 
  //Post-Condition: all nodes are freed. 
 
  void insertItem(T &item);
  //Pre-Condition: the list exists and item is initialized 
  //Post-Condition: the item is inserted into the list, maintaining sorted order.  
 
  void deleteItem(T &item);
  //Pre-Condition: the list exists and item is initialized. 
  //Post-Condition: the node that contains item is removed from the list. If the item is 
  //not present in the list, print the message that is shown in the example output. 
 
  int lengthIs() const;
  //Pre-Condition: the list exists. 
  //Post-Condition: return the length instance variable. 
 
  void print();  
  //Pre-Condition: the list exists. 
  //Post-Condition: items in the list are printed to standard output. 
 
  void printReverse();  
  //Pre-Condition: the list exists. 
  //Post-Condition: items in the list are printed to standard output in reverse order. 

  void deleteSubsection(int upperBound, int lowerBound);

  T mode();

  void swapAlternate();

};

#endif
