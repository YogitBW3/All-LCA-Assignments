#include <stdio.h>
#include <string.h> 
int main () {
char str[] = "Hello123";
char *ptr = strpbrk(str, "012345789");
if(ptr) 
  printf("First digit : %c", *ptr); 
else printf("Not Found"); 
return 0; 
