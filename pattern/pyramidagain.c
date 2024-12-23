// pyramid

 #include <stdio.h>
 int main()
 {
  int r;
    printf("Number of rows : ");
    scanf("%d",&r);
    int nst=r;
    int nsd=1;
    int c=3;
    int y=1;
    
    for(int a=1; a<=2*r+1;a++)
    {
        if(a<=4)
        {
            printf("%d",a);
        }
        else
        {
          printf("%d",c);  
          c--;
        }
    }
    printf("\n");

    for(int i=1;i<=r;i++)
    {
        int g=r-i+1;
        for(int j=1;j<=nst;j++)
        {
            printf("%d",y);
            y++;
        }
        for(int k=1;k<=nsd;k++)
        {
            printf(" ");
        }
        nsd+=2;
         for(int jr=1;jr<=nst;jr++)
        {
            printf("%d",g);
            g--;
        }
        nst--;
        
      printf("\n");
    } 
    return 0;
 }