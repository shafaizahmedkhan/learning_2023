#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex readComplex() {
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

int main() {
    Complex c;

    printf("Enter a complex number:\n");
    c = readComplex();

    printf("Real part: %.2f\n", c.real);
    printf("Imaginary part: %.2f\n", c.imag);

    return 0;
}
