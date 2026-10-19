#include <stdio.h> 
#include <string.h>
int main () { 
  char str[] = "1234abc";
  printf("length = %d", strspn(str, "0123456789")); 
  return 0; 
}
