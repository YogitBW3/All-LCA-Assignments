#include <stdio.h> 
#include <string.h>
int main() { 
char str[] = "Hello";
char dest[20];
memcpy (dest , str , strlen(str)+ 1); 
printf("%s", dest); 
return 0; 
}
