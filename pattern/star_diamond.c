/*Star diamond
   *  
  *** 
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>
int main()
{
 int r;
printf("enter the number of rows : ");
scanf("%d",&r);
int nst=1;
int nsp=r/2;
int ml=(r/2)+1;
  
    for(int i=1; i<=r; i++)
{
        for(int j=1; j<=nsp; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=nst; k++)
        {
            printf("*");
        }
        if(i<ml)
            {
            nsp--;
            nst+=2;
            }
            else
            {
                nsp++;
                nst-=2;
            }
            printf("\n");
    }
 return 0;
}