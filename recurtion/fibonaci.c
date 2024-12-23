//Write a function to calculate the nth fibonacci number using recursion.

#include<stdio.h>
int fibonacci(int n)
{
    if(n==1||n==2) return 1;
  int ans=fibonacci(n-1)+fibonacci(n-2);
  return ans;
}
int main()
{
int number;
printf(" enter the number :");
scanf("%d",&number);
int x=fibonacci(number);
printf("%d",x);
   return 0;
}