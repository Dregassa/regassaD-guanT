main: mystring.o main.o
	gcc -o main main.c

mystring: mystring.c mystring.h
	gcc -c mystring.c 

clean:
	rm *~ 
