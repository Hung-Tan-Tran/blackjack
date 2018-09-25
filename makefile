#CXX = g++47
CXXFLAGS = -g -std=c++11 -pedantic -Wall

program: deck.o program.o
	$(CXX) $(CXXFLAGS) program.cpp -o program
deck.o: deck.h deck.cpp
	$(CXX) $(CXXFLAGS) -c deck.cpp
program.o: program.cpp deck.h
	$(CXX) $(CXXFLAGS) -c program.cpp
clean:
	rm -f *.o core.* program