OBJECTS = unindent.o indent.o
HEADERS = unindent.h indent.h

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

indent.o: indent.cpp indent.h

tests.o: tests.cpp 

unindent.o: unindent.cpp unindent.h

main.o: main.cpp 

clean:
	rm -f *.o 