/*Print the table of 19.*/

//  #include<stdio.h> 
//  int main(){ 
 
//     for(int i=1;i<=10;i++)
//     {
//         int j;
//         j=i*19;
//         printf("19*%d=%d\n",i,j);
//     }
//     return 0;
//  }




 //one more



//  #include<stdio.h> 
//  int main(){ 
 
//     for(int i=19;i<=190;i=i+19)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
//  }


//one more


#include<stdio.h> 
int main(){ 

    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;

}

