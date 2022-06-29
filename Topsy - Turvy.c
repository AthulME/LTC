#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    int i,n, sum1=0,sum2=0;
    float div;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum1=sum1+(i*(i+1));
    }
    printf("%d\n", sum1);
    for(i=0;i<n;i++)
    {
        sum2=sum2+(i+(i+1));
    }
    printf("%d\n", sum2);
    div=sum1/sum2;
    printf("%0.2f", div);
    return 0;
}
