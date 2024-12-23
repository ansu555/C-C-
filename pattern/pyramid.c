//pyramide

#include <stdio.h>
int main()
{
    int l;
    printf("enter the number of line : ");
    scanf("%d",&l);
     int nsp=l-1;
     int nst=1; //number of spaces
   for(int i=1; i<=l; i++)
   { 
    for(int j=1; j<=nsp; j++)
    {
       printf(" ");
    }
    nsp--;
    for(int k=1;k<=nst;k++)
    {
      printf("*");
    }    
    nst+=2;
     printf("\n");
   }
   return 0;
}