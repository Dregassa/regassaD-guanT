#include "mystring.h"

int mystrlen(char* s){
  int length = 0;
  while (*(s + length)){
    length++;
  }
  return length;
}

char * mystrncat(char * dest, char * src, int n) {
  char *d2 = dest + mystrlen(dest);
  // printf("d2: %d", *d2);
  int x = 0;
  while (*src && x < n) {
    // printf("current d2: %c\ncurrent char: %c\n", *(d2 + x), *src);
    *(d2 + x) = *src;
    src++;
    x++;
  }
  *(d2 + x) = 0;
  return dest;
}

char * mystrcat(char * dest, char * src) {
  return mystrncat(dest, src, mystrlen(src));
}

int mystrcmp(char * s1, char * s2) {
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
  return 0;
}
