#include "DoublyLinkedList.h"

int main(int argc, char* argv[]) {

  DoublyLinkedList<int> list;
  int item = 1;
  list.insertItem(item);
  item = 5;
  list.insertItem(item);
  item = 3;
  list.insertItem(item);
  item = 3;
  list.insertItem(item);
  list.print();
  cout << "done" << endl;
  return EXIT_SUCCESS;
}
