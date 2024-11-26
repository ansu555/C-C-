//Hollow Rectangle

 #include<stdio.h> 
 int main(){ 
 
    int c , r;
    printf("Enter the column : ");
    scanf("%d",&c);
    printf("enter the   row : ");
    scanf("%d",&r);
    for(int i=1; i<=c; i++)
    {
        for(int j=1;j<=r;j++)
        {
            if(i==1 || i==4 || j==1 || j==6)
            {
                printf("*");
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
    
 