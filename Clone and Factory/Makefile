# Authors: Utkal Sirikonda, Ravindu Don

CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRCS = Tiger.cpp Wolf.cpp Lemur.cpp Kangaroo.cpp Serpent.cpp Zoo.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = zoo

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)
