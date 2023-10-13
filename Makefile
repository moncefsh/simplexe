HEADERS := $(wildcard src/*)

all : main


main: main.cpp $(HEADERS)
		g++ main.cpp $(wildcard src/*.cpp) -o test

clean:
	rm -f test
