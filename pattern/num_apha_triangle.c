/*Alphabet & Number Triangle
1 
A B
1 2 3
A B C D
1 2 3 4 5
*/

 #include<stdio.h> 
 int main(){ 
 int r,d;
 printf("enter the rows ");
 scanf("%d",&r);
 for(int i=1;i<=r;i++)
 {
    int a=1;
    for(int j=1;j<=i;j++)
    {
        d=a+64;
        char ch=(char)d;
        if(i==2 || i==4)
        {
          printf("%c ",ch);
        }
        else
        {
          printf("%d ",j);
        }
        a++;
    }
    printf("\n");
 }
    
    return 0;
 
 }