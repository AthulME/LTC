#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d%d",&a,&b);
    printf("%d\n%d\n%d\n%0.2f", a+b,a-b,a*b,(float)a/b);
    
    return 0;
}
