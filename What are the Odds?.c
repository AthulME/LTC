#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int a;
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("Even\n");
        printf("%d", a*a);
    }
    else
    {
        printf("Odd\n");
        printf("%d", a*a*a);
    }    
    return 0;
}
