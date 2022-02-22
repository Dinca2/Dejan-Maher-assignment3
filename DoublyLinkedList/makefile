flags = -Wall -pedantic-errors

compile: main.cpp DoublyLinkedList.o
	g++ $(flags) -o main  main.cpp DoublyLinkedList.o

run: compile
	./main int-input.txt

DoublyLinkedList:
	g++ $(flags) -c DoublyLinkedList.cpp

clean:
	rm -rf main
	rm -rf *.o
