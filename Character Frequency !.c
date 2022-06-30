#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char c,word[10];
    int x,y=0;
    gets(word);
    scanf("%c",&c);
    for(x=0;x<10;x++){
        if(word[x]==c){
            y++;
        }
    }
    if(y==0){
        printf("Element not present.");
    }else{
        printf("%d",y);
    }    
    return 0;
}
