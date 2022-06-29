#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    int n, sum=0;
    do{
        scanf("%d", &n);
        if(n==0){break;}
        sum=sum+n;
        if(sum==n){continue;}
        printf("%d\n", sum);
    }while(n>0);    
    return 0;
}
