//Make a function which calculates ‘a’raised to the power ‘b’ using recursion.
#include<stdio.h>
int power(int b , int a)
{
   if(b==0) return 1;
   return a*power(b-1,a);
}
int main()
{
  int a,b;
  printf("enter the a : ");
  scanf("%d",&a);
  printf("enter the b : ");
  scanf("%d",&b);
  int pw=power(b,a);
  printf("%d",pw);
   return 0;
}
 