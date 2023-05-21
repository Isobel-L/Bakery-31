CC := g++
CFLAGS := -Wall -g
TARGET := bakery31

HEADERS := $(wildcard src/*.h)
SRCS := $(wildcard src/*.cpp)
OBJS := $(patsubst src/%.cpp, %.o, $(SRCS))

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

%.o: src/%.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(TARGET) $(OBJS)

.PHONY: all clean
