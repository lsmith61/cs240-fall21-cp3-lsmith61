CC := g++
CFLAGS := -Wall -g
TARGET := exec

# $(wildcard *.cpp /xxx/xxx/*.cpp): get all .cpp files from the current directory and dir "/xxx/xxx/"
# SRCS := $(wildcard *.cpp)
SRCS := DateTime.cpp Activity.cpp ActivityCollection.cpp User.cpp main.cpp
# $(patsubst %.cpp,%.o,$(SRCS)): substitute all ".cpp" file name strings to ".o" file name strings
OBJS := $(patsubst %.cpp,%.o,$(SRCS))

all: $(TARGET)

test: tester

tester: Test.o Activity.o DateTime.o ActivityCollection.o User.o 
	$(CC) -o tester Test.o Activity.o DateTime.o ActivityCollection.o User.o 

Test.o: Test.cpp Test.h
	$(CC) $(CFLAGS) -c Test.cpp

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(TARGET) *.o
	
.PHONY: all clean
