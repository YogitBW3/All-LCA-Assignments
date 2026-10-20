#include <stdio.h> 
#include <ctype.h> 
int main() { 
  char ch = 'A' ;
  printf("isalpha: %d\n" , isalpha(ch));
  printf("isdigit: %d\n" , isdigit(ch)); 
  printf("isalnum: %d\n" , isalnum(ch)); 
  printf("islower: %d\n" , islower(ch));
  printf("isupper: %d\n" , isupper(ch));
  printf("tolower: %c\n" , tolower(ch));
  printf("toupper: %c\n" , toupper(ch));
  return 0;
}
