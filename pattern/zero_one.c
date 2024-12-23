//zero and one triangle

#include<stdio.h> 
int main(){ 
int r;
    printf("enter the number of rows : ");
    scanf("%d",&r);
    for(int i=1; i<=r; i++)
    {
        int s,a;
      
        for(int j=1; j<=i; j++)
        {
          s=i+j;
          a=s%2;
          if(a==0)
          {
            printf("1 ");
          }
          else
          {
            printf("0 ");
          }
        }
        printf("\n");
    }
    
    return 0;

}