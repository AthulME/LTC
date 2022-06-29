#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int n,x,temp,y;
    // printf("enter the number of elements\n");
    scanf("%d",&n);

    int ar[n];
    for(x=0;x<n;x++){
        scanf("%d",&ar[x]);
    }

    for(x=0;x<n-1;x++){
        for(y=0;y<n-1;y++){
            if(ar[y+1]<ar[y]){
                temp=ar[y];
                ar[y]=ar[y+1];
                ar[y+1]=temp;
            }
        }
    }
    // printf("sorted array:\n");
        printf("%d\n",ar[n-1]);
        printf("%d\n",ar[0]);  
    return 0;
}
