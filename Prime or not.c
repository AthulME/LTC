#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
  int n, i, p= 0;
  scanf("%d",&n);
    

  if (n == 0 || n == 1)
    p = 1;

  for (i = 2; i <= n / 4; ++i) {

    if ((n/2)% i == 0) {
      p= 1;
      break;
    }
  }

 
  if (p == 0)
    printf("Number is prime", n);
  else
    printf("Number is not prime", n);
    
    return 0;
}
