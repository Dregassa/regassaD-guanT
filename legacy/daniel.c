#include <stdio.h>
#include <string.h>

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



char* mystrchr(char *s, char c){
	int i = 0;
	while (*(s + i)){
		// printf("s: %c\n", *(s+i));
		if (*(s + i) == c){
			return s+i;
		}
		i++;
	}
	return 0;
}

int main(){
	//mystrlen
	char str[40]="hello";
	char *str2 = ", world!";

	printf("Testing strlen(str)\n");
	printf("[standard]: %d\n", (int)strlen(str));
	printf("[mine]: %d\n", mystrlen(str));

	printf("Testing strcpy(str,str2)\n");
	printf("[standard]: %s\n", strcpy(str,str2));
	printf("[mine]: %s\n", mystrcpy(str,str2));

	printf("Testing strchr(str,'h')\n");
	printf("[standard]: %p\n", strchr(str,'h'));
	printf("[mine]: %p\n", mystrchr(str,'h'));
	//
	//
	// printf("mystrlen(hello, world) = %d\n", mystrlen("hello, world"));
	// char test[40] = "hello,hello";
	// printf("%s\n", mystrcpy(test,"world"));
	// printf("%s\n", mystrchr("hello, world", 'l'));
}
