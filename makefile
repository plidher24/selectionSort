a.out: selectionSort.o
	g++ selectionSort.o -o a.out

selectionSort.o: selectionSort.cpp
	g++ -c selectionSort.cpp -o selectionSort.o

