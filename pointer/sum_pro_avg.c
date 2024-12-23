/*Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.*/
#include<stdio.h>
void domath();
int main()
{
   int x,y;
   printf("enter the number of a :");
   scanf("%d",&x);
   printf("enter the number of b :");
   scanf("%d",&y);
   int s,avg,prod;
   domath(x,y,&s,&avg,&prod);
   printf("sum = %d \n average = %d \n product = %d ",s,avg,prod);
   return 0;
}
void domath(int a,int b,int*sum,int*average,int*product)
{
   *sum=a+b;
   *average=(a+b)/2;
   *product=a*b;
}