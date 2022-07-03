#include <stdio.h>
int main(){
   char Operator;
   float num1, num2, result = 0;
   printf("\n Enter an operator (+, -, *, /): ");
   scanf("%c", &Operator);
   printf("Enter two numbers:");
   scanf("%f%f", &num1, &num2);
   switch(Operator){
      case '+': result = num1 + num2;
         break;
      case '-': result = num1 - num2;
         break;
      case '*': result = num1 * num2;
         break;
      case '/': result = num1 / num2;
         break;
      default: printf("\n Invalid Operator ");
   }
   printf("The result = %f", result);
   return 0;
}
