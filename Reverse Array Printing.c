#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int i,n;
    printf("Enter the number of elements in the array :\n");
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++){
        
        scanf("%d",&ar[i]);
        
        
    }
    i=i-1;
    for(i;i>=0;i--){
        printf("%d\n",ar[i]);
        
    }    
    return 0;
}
