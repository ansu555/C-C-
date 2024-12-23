//Number pyramid
#include <stdio.h>
int main()
{
  int l;
    printf("enter the number of line : ");
    scanf("%d",&l);
     int nst=1;
     int nsp=l-1; //number of spaces
   for(int i=1; i<=l; i++)
   { 
    for(int j=1; j<=nsp; j++)
    {
       printf(" ");
    }
    nsp--;
    for(int k=1;k<=nst;k++)
    {
      printf("%d",k);
    }
    int a=i-1;
     for(int b=1; b<=i-1;b++)
      {
        printf("%d",a);
        a--;
      }
      
    nst++;
   printf("\n");
    }
return 0;
}