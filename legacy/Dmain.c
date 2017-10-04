#include <stdio.h>
#include <string.h>
#include "../mystring.h"

int main(){
	//mystrlen
	char str[40]="hello";
	char* str2 = "hello ,world!";
	
	printf("Testing strlen(str)\n");
	printf("[standard]: %d\n", (int)strlen(str));
	printf("[mine]: %d\n", mystrlen(str));
	
	printf("Testing strcpy(str,str2)\n");
	printf("[standard]: %s\n", strcpy(str,str2));
	printf("[mine]: %s\n", mystrcpy(str,str2));

	printf("Testing strchr(str,'h')\n");
	printf("[standard]: %p\n", strchr(str,str2));
	printf("[mine]: %p\n", mystrchr(str,str2));
	 	
}
