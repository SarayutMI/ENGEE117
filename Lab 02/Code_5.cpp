#include <stdio.h>
#include <string.h>

char *get_greeting() ;

int main() {
  char *str = get_greeting();
  printf("%s\n", str);
  return 0;
}
char *get_greeting() {
  static char *greeting = "Hello, World!";
  return greeting;
}