output: main.o savings.o
	g++ main.o savings.o -o output
main.o: main.cpp
	g++ -c main.cpp savings.h
savings.o: savings.cpp
	g++ -c savings.cpp
clean:
	rm *.o output