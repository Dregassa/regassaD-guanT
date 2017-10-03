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
  char s1[20] = "hello, ";
  char s2[] = "World!";
  printf("strncat2 s1, s2: %s\n", strncat2(s1, s2, sizeof(s1) - strlen(s2) - 1 ));
  // printf("strcat2 s1, s2: %s\n", strcat2(s1, s2));
  printf("strcmp: %d\n", strcmp("abcdef", "abcde")); //Big characters are apparently less than small characters
  printf("strcmp2: %d\n", strcmp2("abcdef", "abcde"));

  // printf("%d\n", 'a' > 0);
  return 0;
}
