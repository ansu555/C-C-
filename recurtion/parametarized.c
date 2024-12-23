//print 1 to n
#include<stdio.h>
void decimal(int x,int n)
{
 if(x>n) return;
 printf("%d\n",x);
 decimal(x+1,n);
 return;
}
int main()
{
  int n;
  printf("enter the n:");
  scanf("%d",&n);
  decimal(1,n);
   return 0;
}