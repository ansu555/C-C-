/*
Ques :Write a program to print all the ASCII values
and their equivalent characters of 26 alphabets
using a while loop.(capital)
*/
 #include<stdio.h> 
 int main(){ 
 for(int i=65;i<=90;i++)
{
    printf("%d ",i);
    char ch=(char)i;
    printf("%c\n",ch);
}
    
    return 0;
 
 }