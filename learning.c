#include<stdio.h>

int main() {
   char op;
   printf("Enter an Operator(+,-,/,*) : ");
   scanf("%c",&op);

   float a,b;
   printf("Enter Your First Operator : ");
   scanf("%f",&a);

   printf("Enter Your Second Operator : ");
   scanf("%f",&b);

   switch (op)
   {
   case '+':printf("Your Anwser = %f\n",a + b);
      break;
   case '-':printf("Your Anwser = %f\n",a - b);
      break;
   case '/':printf("Your Anwser = %f\n",a / b);
      break;
   case '*':printf("Your Anwser = %f\n",a * b);
      break;
   }

   printf("Thank You");
   return 0;
}