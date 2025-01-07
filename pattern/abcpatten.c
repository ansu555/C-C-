//ABC-patten

#include<stdio.h> 
int main(){ 
    int r;
    printf("enter the number of rows : ");
    scanf("%d",&r);
    for(int i=1; i<=r; i++)
    {
       int a=1;
       int v;
        for(int j=1; j<=r+1-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {  
            v=64+a;
            char ch= (char)v;
            printf("%c",v);
            a++;
        }
        printf("\n");
    }
    return 0;
}