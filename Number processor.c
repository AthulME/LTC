#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y;
    scanf("%d",&x);
    if(x%2==0){
        
        for(y=2;y>0;y--)
        {
            x=(x*x)+2;
        }
        printf("%d",x);
        
    }
    else{
        
        for(y=3;y>0;y--){
            x=(x*x)+3;
        }
        printf("%d",x);
    } 
    return 0;
}
