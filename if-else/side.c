/*Take 3 numbers input and tell if they
can be the sides of a triangle.*/
 #include<stdio.h> 
 int main(){ 
 int s1,s2,s3;
 printf("Enter three side: ");
 scanf("%d%d%d",&s1,&s2,&s3);
 if(s1+s2>s3 && s2+s3>s1 && s1+s2>s3)
 {
   printf("\nThe given sides can form a Triangle");
 }
 else{
   printf("\nThe given sides cannot form a Triangle.");
 } 
   return 0;
 }