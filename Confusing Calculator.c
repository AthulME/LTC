#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    float x,y,ans;
    char z;
    scanf("%f\n%f\n%c", &x, &y, &z);
    switch (z){
    case '#':
            ans=x+y;
            printf("%0.1f",ans);
            break;
    case '@':
            ans=y-x;
            printf("%0.1f",ans);
            break;
           
    case '&':
            ans=x*y;
            printf("%0.1f",ans);
            break;
    case '%':
            if (x==0)
            {

                printf("Not Defined");
            }
            else
            {

                ans=y/x;

                printf("%0.1f",ans);
            }
            break;
    default :
            printf ("Error 5: Input Error");
    }
     
    return 0;
}
