#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("%0.2f",sqrt(((a*a)+(b*b)+(c*c))/3));
    return 0;
}
