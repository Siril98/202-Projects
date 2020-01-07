CXX = g++
CXXFLAGS = -Wall

polymorphism: driver.cpp Movie.o Animated.o LiveAction.o
	$(CXX) $(CXXFLAGS) Movie.o driver.cpp -o polymorphism

LiveAction : LiveAction.cpp LiveAction.h Movie.o
	$(CXX) $(CXXFLAGS) -c LiveAction.cpp

Animated.o: Animated.cpp Animated.h Movie.o
	$(CXX) $(CXXFLAGS) -c Animated.cpp

Movie.o: Movie.cpp Movie.h
	$(CXX) $(CXXFLAGS) -c Movie.cpp