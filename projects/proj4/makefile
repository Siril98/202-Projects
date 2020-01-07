CXX = g++
CXXFLAGS = -Wall -g

proj4: Plant.o Vegetable.o Flower.o Tree.o Fruit.o Garden.o driver.o
	$(CXX) $(CXXFLAGS) Plant.o Vegetable.o Flower.o Tree.o Fruit.o Garden.o driver.o -o proj4

Plant.o: Plant.cpp Plant.h
	$(CXX) $(CXXFLAGS) -c Plant.cpp

Vegetable.o: Vegetable.cpp Vegetable.h
	$(CXX) $(CXXFLAGS) -c Vegetable.cpp

Flower.o: Flower.cpp Flower.h
	$(CXX) $(CXXFLAGS) -c Flower.cpp

Tree.o : Tree.cpp Tree.h
	$(CXX) $(CXXFLAGS) -c Tree.cpp

Fruit.o: Fruit.cpp Fruit.h
	$(CXX) $(CXXFLAGS) -c Fruit.cpp

Garden.o: Garden.cpp Garden.h
	$(CXX) $(CXXFLAGS) -c Garden.cpp

driver.o: driver.cpp driver.h
	$(CXX) $(CXXFLAGS) -c driver.cpp

clean:
	rm *.o*
	rm *~

run:
	./proj4