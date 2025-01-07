/*Alphabet pyramid
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include <stdio.h>
int main()
{
  int l;
  int e=1;
    printf("enter the number of line : ");
    scanf("%d",&l);
    int nsp=l-1;
    for(int i=1; i<=l; i++)
    {
        for(int j=1; j<=nsp; j++)
        {
            printf(" ");
        }
        nsp--;
        for(int k=1; k<=i;k++)
        {
            int a=64+k;
            char ch=(char)a;
            printf("%c",a);
        }
        int c=64+i-1;
        for(int b=1;b<=i-1;b++)
        {
            
            char ch=(char)c;
            printf("%c",c);
            c--;  
        }
        printf("\n");
    }
return 0;
}