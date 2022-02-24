#include "DoublyLinkedList.h"

int main(int argc, char* argv[]) {

  /*DoublyLinkedList<int> list;
  int item = 1;
  //DoublyLinkedList<float> list;
  //flaot item = 1;
  
  cout << "testing insert: " << endl;
  list.insertItem(item);
  item = 5;
  list.insertItem(item);
  item = 3;
  list.insertItem(item);
  list.insertItem(item);
  list.insertItem(item);
  list.print();
  cout << "done" << endl;

  cout << endl;
  
  cout << "testing print reverse: " << endl;
  list.printReverse();
  cout << "done" << endl;
  
  cout << endl;

  cout << "testing delete: " << endl;
  list.print();
  item = 1;
  list.deleteItem(item);
  list.print();
  item = 2;
  list.deleteItem(item);
  item = 5;
  list.deleteItem(item);
  list.print();
  item = 3;
  list.deleteItem(item);
  list.print();
  list.deleteItem(item);
  cout << "done" << endl;

  cout << endl;

  cout << "testing inserting in empty list: " << endl << flush;
  item = 5;
  list.insertItem(item);
  list.print();
  cout << "done" << endl;

  cout << endl;
  
  cout << "testing deleteSubsection: " << endl;
  item = 1;
  list.insertItem(item);
  item = 2;
  list.insertItem(item);
  item = 3;
  list.insertItem(item);
  item = 5;
  list.insertItem(item);
  item = 6;
  list.insertItem(item);
  item = 7;
  list.insertItem(item);
  cout << "Orignial: ";
  list.print();
  //list.deleteSubsection(10, 1); //deletes all
  //list.deleteSubsection(6, 2); //deletes mid section
  //list.deleteSubsection(4, 1); //deletes beginning section
  list.deleteSubsection(7, 4); //deletes back section
  //list.deleteSubsection(5, 5);
  cout << "Modified: ";
  list.print();
  cout << "done" << endl;

  cout << endl;

  cout << "testing mode: " << endl;
  //item = 1;
  //list.insertItem(item);
  item = 2;
  list.insertItem(item);
  item = 3;
  list.insertItem(item);
  item = 5;
  list.insertItem(item);
  item = 6;
  list.insertItem(item);
  item = 7;
  list.insertItem(item);
  //list.insertItem(item);
  //list.deleteSubsection(7,1); test for empty list
  list.print();
  if(list.lengthIs() == 0) {
    cout << "mode: " << endl;
  } else {
    cout << "mode: " << list.mode() << endl;
  }
  cout << "done" << endl;

  cout << endl;

  cout << "testing swapAlt: " << endl;
  list.print();
  list.swapAlternate();
  list.print();
  cout << "done" << endl;
  */

  /*DoublyLinkedList<string> list;
  string item = "Max";

  cout << "testing insert: " << endl;
  list.insertItem(item);
  item = "Dejan";
  list.insertItem(item);
  item = "Craig";
  list.insertItem(item);
  list.insertItem(item);
  list.insertItem(item);
  list.print();
  cout << "done" << endl;

  cout << endl;

  cout << "testing print reverse: " << endl;
  list.printReverse();
  cout << "done" << endl;

  cout << endl;

  cout << "testing delete: " << endl;
  list.print();
  item = "Max";
  list.deleteItem(item);
  list.print();
  item = "Connor";
  list.deleteItem(item);
  item = "Dejan";;
  list.deleteItem(item);
  list.print();
  item = "Craig";
  list.deleteItem(item);
  list.print();
  list.deleteItem(item);
  cout << "done" << endl;

  cout << endl;

  cout << "testing inserting in empty list: " << endl << flush;
  item = "Craig";
  list.insertItem(item);
  list.print();
  cout << "done" << endl;

  cout << endl;

  cout << "testing deleteSubsection: " << endl;
  item = "Max";
  list.insertItem(item);
  item = "Connor";
  list.insertItem(item);
  item = "Craig";
  list.insertItem(item);
  item = "Dejan";
  list.insertItem(item);
  item = "Katrina";
  list.insertItem(item);
  item = "Robin";
  list.insertItem(item);
  cout << "Orignial: ";
  list.print();
  list.deleteSubsection("Z", "A"); //deletes all
  //list.deleteSubsection(6, 2); //deletes mid section
  //list.deleteSubsection(4, 1); //deletes beginning section
  //list.deleteSubsection("Zia", "Nic"); //deletes back section
  //list.deleteSubsection(5, 5);
  cout << "Modified: ";
  list.print();
  cout << "done" << endl;

  cout << endl;

  cout << "testing mode: " << endl;
  //item = "Max";
  //list.insertItem(item);
  item = "Connor";
  list.insertItem(item);
  item = "Craig";
  list.insertItem(item);
  item = "Dejan";
  list.insertItem(item);
  item = "Katrina";
  list.insertItem(item);
  item = "Robin";
  list.insertItem(item);
  //list.insertItem(item);
  //list.deleteSubsection(7,1); test for empty list
  list.print();
  if(list.lengthIs() == 0) {
    cout << "mode: " << endl;
  } else {
    cout << "mode: " << list.mode() << endl;
  } //if
  cout << "done" << endl;

  cout << endl;

  cout << "testing swapAlt: " << endl;
  list.print();
  list.swapAlternate();
  list.print();
  cout << "done" << endl;
  */
return EXIT_SUCCESS;
}
