#include "mystring.h"

int mystrlen(char* s){
  int length = 0;
  while (*(s + length)){
    length++;
  }
  return length;
}

char * strncat2(char * dest, char * src, int n) {
  char *a = src;
  char *d2 = dest + mystrlen(dest);
  int x = 0;
  while (*a && n--) {
    *(d2 + x) = *a;
    a++;
    x++;
  }
  *(dest + mystrlen(dest)) = 0;
  return dest;
}

char * strcat2(char * dest, char * src) {
  return strncat2(dest, src, mystrlen(src));
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
