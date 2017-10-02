#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strncat2(char * dest, char * src, int n) {
  char * a = src;
  int x = 0;
  char * d2 = *(dest + strlen(dest) - 1);
  for (; x < n - 1; x++) {
    *(d2 + x) = * a; 
    a++; 
  }
  *(dest + strlen(dest)) = 0;
  return * dest; 
}


int main() {
  char s1[] = "hello, ";
  char s2[] = "World!";
  printf("strncat2 s1, s2: %s", strncat2(s1, s2, 2));
  return 0;
}
