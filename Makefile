Resize: clean
	g++ -std=c++1y -o Resize.o -c Resize.cpp -Wall -O `pkg-config --cflags-only-I opencv`
	g++ -o Resize Resize.o `pkg-config --cflags --libs opencv`

dilation-erosion: clean
	g++ -std=c++1y -o dilation-erosion.o -c dilation-erosion.cpp -Wall -O `pkg-config --cflags-only-I opencv`
	g++ -o dilation-erosion dilation-erosion.o `pkg-config --cflags --libs opencv`

cannyEdge: clean
	g++ -std=c++1y -o cannyEdge.o -c cannyEdge.cpp -Wall -O `pkg-config --cflags-only-I opencv`
	g++ -o cannyEdge cannyEdge.o `pkg-config --cflags --libs opencv`
	
clean:
	rm -f *.o Resize dilation-erosion cannyEdge
