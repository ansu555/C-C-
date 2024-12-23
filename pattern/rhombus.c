//Rhombus.c
#include<stdio.h> 
int main(){ 

     int r,c;
    printf("enter the number of rows : ");
    scanf("%d",&r);
    printf("enter the number of columns : ");
    scanf("%d",&c);
   for(int i=1; i<=c; i++)
    {
        int v=r/2;
        for(int j=1; j<=v+1-i;j++)
        {
            printf(" ");
        }
        for(int k=1; k<=r; k++)
        {
            printf("*");
        }
        printf("\n");
    }    
    return 0;

}