#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int i,n,x;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter the element to be searched:\n");
    scanf("%d",&x);
    for(i;i>0;i--){
        if(ar[i]==x){
            printf("Location is :\n%d",i+1);
            break;
        }
    }
    return 0;
}
