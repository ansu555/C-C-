
#include <stdio.h>

void printBinary(int num) {
    // Size of an integer in bits
    int size = sizeof(int) * 4;

    for (int i = size - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int calculateOnesComplement(int n) {
    return ~n; // Bitwise NOT operation
}

int calculateTwosComplement(int n) {
    return ~n + 1; // Two's complement is ones complement + 1
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%i", &number);
if(number>0)
{
 // Print binary representations
    printf("Binary representation: ");
    printBinary(number);

}
else
{
  printf("One's complement: ");
    printBinary(calculateOnesComplement(number));

    printf("Two's complement: ");
    printBinary(calculateTwosComplement(number));

}
   
    return 0;
}
