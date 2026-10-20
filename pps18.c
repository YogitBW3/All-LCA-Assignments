#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
    int err = 2; 
    printf("Error : %s",strerror(err));

    return 0;
}

