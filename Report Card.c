#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int ar[10];
    int i,n,a, min;
    for(i=0;i<10;i++){
       scanf("%d", &n);
        ar[i]=n;
        
    }
    for (a=0;a<9;a=a+2){
        min=ar[a+1]*100/ar[a];
        if(min<40){
            printf("F\n");
        }
        else if(min < 55)
        {
            printf("P\n");
        }
        else if(min < 60)
        {
            printf("D\n");
        }
        else if( min < 65){
            printf("C\n");
        }
        else if(min < 70){
            printf("C+\n");
        }
        else if(min < 75){
            printf("B\n");
        }
        else if(min < 80){
            printf("B+\n");
        }
        else if(min < 85){
            printf("A\n");
        }
        else if (min < 90){
            printf("A+\n");
        }
        else{
            printf("S\n");
        }
  }
    return 0;
}
