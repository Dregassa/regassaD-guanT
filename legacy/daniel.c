
#include <stdio.h>
#include <mystring.h>

int mystrlen(char* s){
	int length = 0;
	while (*(s + length)){
		length++;
	}
	return length;
}


char* mystrcpy(char* dest, char* source){
	int lensource = mystrlen(source); 
	int i = 0;
	for(;i <= lensource; i++){ // <= adds the null byte
		*(dest + i) = *(source + i);	
	}
	return dest;
}



char* mystrchr(char* s, char c){
	int i = 0;
	while (*(s + i)){
		if (*(s + i) == c){return s+i;}
		i++;
	} 
	return s+i;
}

int main(){
	printf("mystrlen(hello, world) = %d\n", mystrlen("hello, world"));
	char test[40] = "hello,hello";
	printf("%s\n", mystrcpy(test,"world"));
	printf("%s\n", mystrchr("hello, world", 'l'));
}
