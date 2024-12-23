/* Program to swap two numbers (using a third variables) and (without using a third variable).  */



// #include<stdio.h> 
// int main(){ 

//     int a,b;
//     int temp=0;

//     printf("enter the value of a,b : \n");
//     scanf("%d\n%d",&a,&b);

//     //swapping logic
//     temp=a;
//     a=b;
//     b=temp;
      
//       printf("after swapping %d and %d is",a,b);
      
//     return 0;

// }

#include<stdio.h> 
int main(){ 

    int a;
    int b;
    
    printf("enter the value of a,b : \n");
    scanf("%d\n%d",&a,&b);

    //swapping logic
  
    a=a+b;
    b=a-b;
    a=a-b;
    
      
      printf("after swapping %d and %d is",a,b);
      
    return 0;

}