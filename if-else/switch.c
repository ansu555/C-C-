/* Program to create Grade Card of a student using Switch case.*/

#include<stdio.h> 
int main(){ 

    int marks;
 printf("enter the marks : ");
 scanf("%d",&marks);
  
  switch (marks/10)
  {
    case 10 :
  case 9 :
    printf("grade A+");
    break;
    case 8:
    printf("grade A");
    break;
    case 7:
    printf("grade B+");
    break;
    case 6:
    printf("grade B");
    break;
    case 5:
    printf("grade C+");
    break;
    case 4:
    printf("grade C");
    break;
     case 3:
    printf("grade F");
    break;
  }
    return 0;

}