CXX = g++
CXXFLAGS = -Wall

friend: friend.cpp Box.o
	$(CXX)$(CXXFLAGS) Box.o friend.cpp -o friend

Box.o: Box.cpp Box.h
	$(CXX)$(CXXFLAGS) -c Box.cpp