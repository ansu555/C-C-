/*Program to check the largest of three numbers using ternary operator.*/

#include<stdio.h> 
int main(){ 

    int a, b, c;
    int val;

    printf("enter the first number");
    scanf("%d",&a);

      printf("enter the first number");
    scanf("%d",&b);

      printf("enter the first number");
    scanf("%d",&c);
    
   val= a>b?(a>c?a:c):(b>c?b:c);

   printf("%d is the biggest value",val);
      
    return 0;

}