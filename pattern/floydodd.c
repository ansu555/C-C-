//Floyds triangle with odd

 #include<stdio.h> 
int main(){ 
 int r;
    printf("enter the number of rows : ");
    scanf("%d",&r);
    int a=1;
    for(int i=1;i<=r;i++)
    {
      for(int j=1;j<=i;j++)
      {
        printf("%d ",a);
        a+=2;
      }
      printf("\n");
    }
    
    return 0;
 
 }