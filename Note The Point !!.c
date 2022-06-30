#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a=0,b=0,s=0;
    int *a1=&a;
    int *b1=&b;
    int *s1=&s;
    scanf("%d%d",a1,b1);
    *s1=*a1+*b1;
    printf("Sum is %d",*s1);
  
    return 0;
}
