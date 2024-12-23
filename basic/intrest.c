//Calculating Simple Interest
#include<stdio.h>
int main()
{
    //s.i=principal*rate*time
    int p,r,t;
    printf(" enter the principal amount :");
    scanf("%d",&p);
    printf("enter the rate :");
    scanf("%d",&r);
    printf("enter the time :");
    scanf("%d",&t);
    int s=(p*r*t)/100;
    printf("simple intrest of %d is %d",p,s);

}