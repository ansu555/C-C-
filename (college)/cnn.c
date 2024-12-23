#include <stdio.h>
#include <string.h>

int binaryToDecimal(char *binary, int start) {
    int decimal = 0;
    for(int i = 0; i < 4; i++) {
        decimal = decimal * 2 + (binary[start + i] - '0');
    }
    return decimal;
}

void decimalToBinary(int decimal, char *result) {
    for(int i = 3; i >= 0; i--) {
        result[i] = (decimal % 2) + '0';
        decimal = decimal / 2;
    }
    result[4] = '\0';
}

void calculateChecksum(char *data) {
    int len = strlen(data);
    int sum = 0;
    char temp[5];
    
    for(int i = 0; i < len; i += 4) {
        sum += binaryToDecimal(data, i);
    }
    
    sum = sum % 16; 
    sum = 15 - sum; 
    
    decimalToBinary(sum, temp);

    printf("Original data: %s\n", data);
    printf("4-bit segments: ");
    for(int i = 0; i < len; i += 4) {
        for(int j = i; j < i + 4; j++) {
            printf("%c", data[j]);
        }
        printf(" ");
    }
    printf("\nChecksum (4-bit): %s\n", temp);
    printf("Encoded data: %s%s\n", data, temp);
}

int main() {
    char data[] = "11011011";
    calculateChecksum(data);
    return 0;
}