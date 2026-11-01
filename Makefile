CXX      = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra -g $(shell pkg-config --cflags sfml-graphics sfml-window sfml-system)
LDFLAGS  = $(shell pkg-config --libs sfml-graphics sfml-window sfml-system)

SRC    = $(wildcard *.cpp)
OBJ    = $(SRC:.cpp=.o)
TARGET = jogo

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all run clean