#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,item, i;
    float temp=0.000;
    scanf("%d\n", &n);
    for (i=1;i<=n;i++){
        scanf("%d\n", &item);
        switch(item){
        case 1:
                temp=temp+15.0;
                break;
        case 2:
                temp=temp+5.0;
                break;
        case 3:
                temp=temp+10.0;
                break;
        case 4:
                temp=temp+(80.0-(80.0*5/100));
                break;
        case 5:
                temp=temp+(125.0-(125.0*5/100));
                break;
        case 6:
                temp=temp+100.0;
                break;
        default :
           temp=temp+60.0;
    }}
    printf("%0.3f\n", temp);
    printf("%0.3f", (temp+(temp*2/100)));   
    return 0;
}
