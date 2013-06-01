cory:		moreSortFunctions.o moreSortMain.o
	g++ moreSortFunctions.o moreSortMain.o -o cory

moreSortMain.o: moreSortMain.cpp moreSortFunctions.h
	g++ -c moreSortMain.cpp

moreSortFunctions.o: moreSortFunctions.cpp moreSortFunctions.h
	g++ -c moreSortFunctions.cpp

debugSort:
	 g++ -g moreSortFunctions.cpp moreSortMain.cpp -o debugSort
