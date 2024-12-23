/*Number pyramid2
*********
**** ****
***   ***
**     **
*       * */

#include <stdio.h>
int main()
{
 int r;
 printf("enter the number of rows : ");
scanf("%d",&r);
 int nsp=1;
 int nst=r-1;
 for(int p=1;p<=2*r-1;p++)
 {
  printf("*");
 }
 printf("\n");
for(int i=1; i<=r; i++)
{
    for(int j=1; j<=nst; j++)
    {
     printf("*");
    }
    for(int k=1;k<=nsp;k++)
    {
      printf(" ");
    }
    for(int jk=1; jk<=nst; jk++)
    {
     printf("*");
    }
    nsp+=2;
    nst--;
     printf("\n");
}
return 0;
}