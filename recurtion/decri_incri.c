//decreising to incresining
#include<stdio.h>
void decint(int n)
{
    if(n==0) return;
    printf("%d\n",n);
    decint(n-1);
    printf("%d\n",n);
    return;
}
int main()
{
  int n;
  printf("enter the number :");
  scanf("%d",&n);
  decint(n);
   return 0;
}
