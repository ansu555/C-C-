/*Write a program to check if given character is digit
or not.*/
 #include<stdio.h> 
 int main(){ 
  char c;
  printf("enter the char : ");
  scanf("%c",&c);
    if(c<='9' && c>='0')
    {
        printf("this is a number");
    }
    else
    {
        printf("its a character"); 
    }
    return 0;
 
 }