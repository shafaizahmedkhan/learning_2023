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

int main() {
    Complex c;

    c.real = 3.5;
    c.imag = -2.8;

    writeComplex(c);

    return 0;
}
