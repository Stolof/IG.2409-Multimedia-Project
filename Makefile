resize: cleanResize
	g++ -std=c++1y -o resize.o -c resize.cpp -Wall -O `pkg-config --cflags-only-I opencv`
	g++ -o resize resize.o `pkg-config --cflags --libs opencv`

cleanResize:
	rm -f *.o resize
