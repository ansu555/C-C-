//wap to print sum of all the even digits of a given number

#include <stdio.h>

int main() {
    int num, digit, sum_of_evens = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num > 0) {
        digit = num % 10;
        if(digit % 2 == 0) {
            sum_of_evens += digit;
        }
        num /= 10;
    }
    
    printf("Sum of even digits: %d", sum_of_evens);
    
    return 0;
}
