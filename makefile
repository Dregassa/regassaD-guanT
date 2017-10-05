all: main.o mystring.o
	gcc -o strtest mystring.o main.o

main.o: main.c mystring.h
	gcc -c main.c mystring.h 

mystring.o: mystring.c mystring.h
	gcc -c mystring.c mystring.h

clean:
	rm *o
	rm *gch
	rm *~

run: all
	./strtest
