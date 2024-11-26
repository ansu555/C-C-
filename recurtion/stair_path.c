//stair path
#include<stdio.h>
int stair(int n)
{
    if(n<=2) return n;
    int s=stair(n-1)+stair(n-2);
    return s;
}
int main()
{
int n;
printf(" number of stairs :");
scanf("%d",&n);
int ss=stair(n);
printf("total ways is %d",ss);
   return 0;
}