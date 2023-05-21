CC := g++
CFLAGS := -Wall
TARGET := bakery31
OBJDIR := build

HEADERS := $(wildcard src/*.h)
SRCS := $(wildcard src/*.cpp)
OBJS := $(patsubst src/%.cpp, build/%.o, $(SRCS))

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir -p $(OBJDIR)

build/%.o: src/%.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c  -o $@ $<

clean:
	rm -rf $(TARGET) $(OBJDIR)

.PHONY: all clean
