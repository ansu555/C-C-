//print sum of 1 to n
//using by return

#include<stdio.h>
int sum(int n)
{
    if(n==0) return 0;
    sum(n-1);
    int ss=n+sum(n-1);
    return ss;
    
}
int main()
{
    int number;
    printf("Enter a positive integer: ");   
    scanf("%d", &number);
    int suu=sum(number);
    printf("sum is %d",suu);
   return 0;
}
