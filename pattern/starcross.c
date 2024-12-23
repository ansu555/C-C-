//starcross

#include<stdio.h> 
int main(){ 
int r;
    printf("enter the number of rows : ");
    scanf("%d",&r);
    int i;
    for( i=1; i<=r; i++)
    { int a=r;
        for(int j=1; j<=r; j++)
        {
            if(i==j || i+j==r +1)
            {
                printf("* ");
            }
            else
            {
               printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;

}
