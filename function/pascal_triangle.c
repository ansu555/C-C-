//pascal triangle
#include<stdio.h>
 int pascal(int a)
 {
    int fact=1;
    for(int c=2;c<=a;c++)
    {
        fact=fact*c;
    }
    return fact;
 }
 int parbu(int v,int b)
 {
    int ncr= pascal(v)/(pascal(b)*pascal(v-b));
    return ncr;
 }
int main()
{
    int l;
    printf("number of lines :");
    scanf("%d",&l);
    int nsp=l-1;
    int nst=1;
    for(int i=0;i<l;i++)
    {
        for(int k=0;k<nsp;k++)
        {
            printf(" ");
        }  
        nsp--;  
         for(int j=0;j<=i;j++)
         {
            int ijfact= parbu(i,j);
            printf("%d ",ijfact);
         }
        printf("\n");
    }
return 0;
}
