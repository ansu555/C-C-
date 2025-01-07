//odd number triangle

#include<stdio.h> 
int main(){ 

    int r;
    printf("enter the number of rows : ");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=2*i-1;j+=2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
     
    return 0;

}