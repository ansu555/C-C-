#include<stdio.h>
int stair(int n)
{
    if(n<=3) return n;
    int s=stair(n-1)+stair(n-2)+stair(n-3);
    return s;
}
int main()
{
int n;
printf("Enter the number of stairs ");
scanf("%d",&n);
int st=stair(n);
printf("The Number of ways to climb %d steps is =%d ",n,st);
   return 0;
}