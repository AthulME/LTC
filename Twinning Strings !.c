#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char word1[30],word2[30];
    int result;
    gets(word1);
    gets(word2);
    result=strcmp(word1,word2);
    if(result==0){
        printf("The strings are equal.");
    }else{
        printf("The strings aren't equal.");
    }    
    return 0;
}
