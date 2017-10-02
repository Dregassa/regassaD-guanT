#include <stdio.h>

int mystrlen(char* s){
	int length = 0;
	while (s + length){
		length++;
	}
	return length;
}

char* mystrcpy(char* dest, char* source){
	char* end = dest + mystrlen(dest);
	int lensource = mystrlen(source);
	int i = 0;
	for(;i < lensource; i++){
		*(end + i) = *(source + i);	
	}
	end + i = 0;
	return dest;
}

char* mystrchr(char* s, char c){
	int i = 0;
	while (s + i){
		if (s + i == c){return s+i};
		i++;
	} 
	return s+i;
}
