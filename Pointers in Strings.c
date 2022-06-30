#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[30];
    char *str2;
    gets(str);
    str2= str;

     while (*str2 != '\0') {
    printf("%c", *str2);
    str2++;
     }    
    return 0;
}
