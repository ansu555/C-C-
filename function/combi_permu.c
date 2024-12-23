//combination&permutation.c
/*
nCr=n!/r!*(n-r)!
*/
#include<stdio.h>
int parcom(int i)
{
    int fact=1;
    for(int a=2;a<=i;a++)
    {
        fact=fact*a;
    }
    return fact;
}
int main()
{
    int n,r;
 printf("enter the valu of n :");
 scanf("%d",&n);
 printf("enter the value of r :");
 scanf("%d",&r);
 int nfact= parcom(n);
 int rfact= parcom(r);
 int nrfact=parcom(n-r);
 int ncr=nfact/(rfact*nrfact);
 printf("ncr = %d",ncr);
return 0;
}