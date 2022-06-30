#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int a,b,i,j,odd=0,even=0;
    scanf("%d%d",&a,&b);
    int ar[a][b];
    for (i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    for (i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(ar[i][j]%2==0)
                even++;
            else
                odd++;
        }
    }
    printf("%d\n",odd);
    printf("%d",even);  
    return 0;
}
