#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int a,b,x,y;
    scanf("%d",&a);
    scanf("%d",&b);
    int ar[a][b];
    for(x=0;x<a;x++){
        for(y=0;y<b;y++){
            scanf("%d",&ar[x][y]);
        }
    }
    for(x=0;x<a;x++){
        for(y=0;y<b;y++){
            printf("%d ",ar[y][x]);
        }
        printf("\n");
    } 
    return 0;
}
