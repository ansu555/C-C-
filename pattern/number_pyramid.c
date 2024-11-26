//Number pyramid

#include <stdio.h>
int main()
{
int l;
    printf("enter the number of line : ");
    scanf("%d",&l);
    int pn=1;
    int nsd=l-1;
    for(int i=1; i<=l; i++)
    {
        for(int j=1; j<=nsd;j++)
        {
            printf(" ");
        }
        nsd--;
        for(int k=1;k<=pn;k++)
        {
            printf("%d",k);;
        }
        pn=pn+2;
        printf("\n");
    }
return 0;
}