//print 1 to n
#include<stdio.h>
void decimal(int n)
{
    if(n==0) return;
    decimal(n-1);
    printf("%d\n",n);
    return;
}
int main()
{
int n;
printf("enter the n :");
scanf("%d",&n);
 decimal(n);
   return 0;
}