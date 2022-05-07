#Makefile 

SUB = g++ -pedantic-errors -std=c++11

gamefunc.o: gamefunc.cpp gamefunc.h
	$(SUB) -c gamefunc.cpp
main.o:  main.cpp gamefunc.h 
	$(SUB) -c main.cpp
main:  gamefunc.o main.o 
	$(SUB) gamefunc.o main.o -o main
clean:
	rm -f main main.o gamefunc.o main.tgz
tar:
	tar -czvf main.tgz *.cpp *.h

.PHONY: clean tar
