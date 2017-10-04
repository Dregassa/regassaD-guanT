#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strncat2(char * dest, char * src, int n) {
  char *a = src;
  char *d2 = dest + strlen(dest);
  int x = 0;
  while (*a && n--) {
    *(d2 + x) = *a;
    a++;
    x++;
  }
  *(dest + strlen(dest)) = 0;
  return dest;
}

char * strcat2(char * dest, char * src) {
  return strncat(dest, src, strlen(src));
}

int strcmp2(char * s1, char * s2) {
  char *a = s1;
  char *b = s2;
  while (*a || *b) {
    //printf("current letter: %c, %c\n", *a, *b);
    if (*a < *b)
      return -1;
    if (*a > *b)
      return 1;
    a++;
    b++;
  }
  return 0;
}

int main() {
  printf("\n------------------testing strncat/strcat----------------\n"); 
  char a[] = "main";
  char src[] = " street"; 
  printf("testing strncat: %s\n", strncat(a, src , sizeof(a) - strlen(src) - 1));
  char b[] = "main";
  printf("testing my own strncat: %s\n", strncat2(b, " street",  sizeof(a) - strlen(src) - 1));
  char c[]= "main";
  printf("testing strcat: %s\n", strcat(c, " street"));
  char d[]= "main";
  printf("testing my own strcat: %s\n", strcat2(d, " street"));
  printf("------------------finished testing strncat/strcat----------------\n\n");
  printf("------------------testing strcmp----------------\n"); 
  printf("testing strcmp (comparing hey to hey): %d\n", strcmp("hey", "hey"));  
  printf("testing my own strcmp (comparing hey to hey): %d\n", strcmp2("hey", "hey"));
  printf("testing strcmp (comparing Hello to HELLO): %d\n", strcmp("Hello", "HELLO"));  
  printf("testing strcmp (comparing Hello to HELLO): %d\n", strcmp2("Hello", "HELLO"));
  printf("testing strcmp (comparing h to \"): %d\n", strcmp("h", ""));
  printf("testing strcmp (comparing h to \"): %d\n", strcmp2("h", ""));  
  printf("------------------finished testing strcmp----------------\n\n");
  return 0;
}
