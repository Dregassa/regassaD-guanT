/*
Terry Guan, Daniel Regasa
str functions
2017-10-04
 */
#include <stdio.h>
#include <string.h>
#include "mystring.h"

int main() {
  char str[40]="hello";
	char *str2 = ", world!";

	printf("------------------testing mystrlen----------------\n");
	printf("testing strlen: %d\n", (int)strlen(str));
	printf("testing my own strlen: %d\n", mystrlen(str));
  printf("------------------finished testing mystrlen----------------\n");

  printf("\n------------------testing mystrcpy----------------\n");
	printf("testing strcpy: %s\n", strcpy(str,str2));
	printf("testing my own strcpy: %s\n", mystrcpy(str,str2));
  printf("------------------finished testing mystrcpy----------------\n");

  printf("\n------------------testing strchr----------------\n");
	printf("testing strchr: %p\n", strchr(str,'h'));
	printf("testing my own strchr: %p\n", mystrchr(str,'h'));
  printf("------------------finished testing strchr----------------\n");

  printf("\n------------------testing strncat/strcat----------------\n");
  char a[] = "main";
  char src[] = " street";
  // printf("%d\n",  sizeof(a) - strlen(src) - 1);
  printf("testing strncat: %s\n", strncat(a, src , sizeof(a) - strlen(a) - 1));
  mystrcpy(a, "main");
  mystrcpy(src, " street");
  // printf("%d\n",  sizeof(a) - strlen(src) - 1);
  printf("testing my own strncat: %s\n", mystrncat(a, src,  sizeof(a) - strlen(a) - 1));
  mystrcpy(a, "main");
  mystrcpy(src, " street");
  printf("testing strncat: %s\n", strncat(a, src, 4));
  mystrcpy(a, "main");
  mystrcpy(src, " street");
  printf("testing my own strncat: %s\n", mystrncat(a, src, 4));
  mystrcpy(a, "main");
  mystrcpy(src, " street");
  printf("testing strcat: %s\n", strcat(a, src));
  mystrcpy(a, "main");
  mystrcpy(src, " street");
  printf("testing my own strcat: %s\n", mystrcat(a, src));
  printf("------------------finished testing strncat/strcat----------------\n\n");

  printf("------------------testing strcmp----------------\n");
  printf("testing strcmp (comparing hey to hey): %d\n", strcmp("hey", "hey"));
  printf("testing my own strcmp (comparing hey to hey): %d\n", mystrcmp("hey", "hey"));
  printf("testing strcmp (comparing Hello to HELLO): %d\n", strcmp("Hello", "HELLO"));
  printf("testing strcmp (comparing Hello to HELLO): %d\n", mystrcmp("Hello", "HELLO"));
  printf("testing strcmp (comparing h to \"): %d\n", strcmp("h", ""));
  printf("testing strcmp (comparing h to \"): %d\n", mystrcmp("h", ""));
  printf("testing strcmp (comparing H to h): %d\n", strcmp("H", "h"));
  printf("testing strcmp (comparing H to h): %d\n", mystrcmp("H", "h"));
  printf("------------------finished testing strcmp----------------\n\n");

  return 0;
}
