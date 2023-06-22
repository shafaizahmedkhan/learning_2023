#include <stdio.h>

int main() {
    double x = 0.7;
    unsigned long long *ptr = (unsigned long long *)&x;

    unsigned long long exponent = (*ptr & 0x7FF0000000000000) >> 52;
    unsigned int hexExponent = (unsigned int)(exponent);
    unsigned int binaryExponent = 0;

    printf("Exponent in Hexadecimal: 0x%X\n", hexExponent);

  
    for (int i = 0; i < 11; i++) {
        binaryExponent |= ((exponent >> (10 - i)) & 0x1) << i;
    }

    printf("Exponent in Binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (binaryExponent >> i) & 0x1);
    }
    printf("\n");

    return 0;
}
