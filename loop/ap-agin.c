/*display this ap 4,7,10,13,16 . . . upto 'n' terms*/

// #include<stdio.h> 
// int main(){ 

//     int n,i;
//     printf("enter the nth term : ");
//     scanf("%d",&n);
//     for(i=4;i<=3*n-1;i+=3)
//     {
//         printf("ap series up to nth term is : %d\n",i);
//     }
//     return 0;

// }

#include<stdio.h> 
int main()
{
    int a=4;
    int n;
    printf("enter the nth term : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        a=a*i;
        printf("%d\n",a);
    }
    return 0;
}
