CC=g++
CFLAGS=-c -g -O0 -ggdb -std=c++11 -Wall
LDFLAGS=
SOURCES=ffvehicle.cpp fftruck.cpp ffhelicopter.cpp proj4.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=proj4

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f core $(EXECUTABLE) $(OBJECTS)
