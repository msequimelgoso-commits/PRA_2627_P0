CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = main
OBJS = main.o BrazoRobot.o

all:	$(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

main.o: main.cpp BrazoRobot.h
	$(CXX) $(CXXFLAGS) -c main.cpp

BrazoRobot.o: BrazoRobot.cpp BrazoRobot.h
	$(CXX) $(CXXFLAGS) -c BrazoRobot.cpp

test: all
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all test clean
