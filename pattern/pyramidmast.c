/* Number pyramide

1 2 3 4 5 6 7 
1 2 3   5 6 7 
1 2       6 7 
1           7 */

#include <stdio.h>
int main()
{
int r;
    printf("enter the number of rows : ");
    scanf("%d",&r);
    int nst=r;
    int nsp=1;
    for(int p=1;p<=2*r+1;p++)
    {
        printf("%d ",p);
    }
    printf("\n");
    for(int i=1;i<=r;i++)
    {
        int a=1;
        for(int j=1;j<=nst;j++)
        {
          printf("%d ",a);
          a++;
        }
        for(int k=1;k<=nsp;k++)
        {
          printf("  ");
          a++;
        }
        for(int k=1;k<=nst;k++)
        {
          printf("%d ",a);
          a++;
        }
        nsp+=2;
        nst--;
         printf("\n");
    }
return 0;
}