output: main.o bank.o
	g++ main.o bank.o -o output
main.o: main.cpp
	g++ -c main.cpp bank.h
bank.o: bank.cpp
	g++ -c bank.cpp
clean:
	rm *.o output