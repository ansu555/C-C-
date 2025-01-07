//Star plus

#include<stdio.h> 
int main()
{ 
int r;
 printf("enter the rows ");
 scanf("%d",&r);
//  for(int i=1;i<=r;i++)
//  {
//     for(int j=1;j<=r;j++)
//     {
//         if(j==(r/2)+1 || i==(r/2)+1)
//         {
//             printf("*");
//         }
//         else 
//         {
//             printf(" ");
//         }

//     }
//      printf("\n");
//  }
//     return 0;
// }
for(int i=1;i<=r;i++)
{
    if(i<(r/2)+1 || i>(r/2)+1)
    {
      for(int j=1;j<=r-((r/2)+1);j++)
      {
       printf(" ");
      }
      for(int v=1;v<=1;v++)
      {
        printf("*");
      }
    }
    else
    {
        for(int k=1;k<=r;k++)
        {
            printf("*");
        }
    }
   printf("\n"); 
}
 return 0;
}