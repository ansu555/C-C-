//star triangle inverted

#include<stdio.h> 
int main(){ 
    int r;
    printf("enter the number of rows : ");
    scanf("%d",&r);
   for(int i=1; i<r; i++)
   {
    for( int j=1; j<=r+1-i; j++)
    {
        printf("* ");
    }
    {
        printf("\n");
    }
   }
    return 0;

}