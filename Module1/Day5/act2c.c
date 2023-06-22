#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

void writeComplex(Complex c) {
    if (c.imag >= 0)
        printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
    else
        printf("Complex number: %.2f - %.2fi\n", c.real, -c.imag);
}

Complex addComplex(Complex c1, Complex c2) {
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

int main() {
    Complex c1, c2, sum;

    c1.real = 2.5;
    c1.imag = 1.8;

    c2.real = -1.3;
    c2.imag = 4.7;

    printf("First complex number:\n");
    writeComplex(c1);

    printf("Second complex number:\n");
    writeComplex(c2);

    sum = addComplex(c1, c2);

    printf("Sum of the complex numbers:\n");
    writeComplex(sum);

    return 0;
}
