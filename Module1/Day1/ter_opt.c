#include <stdio.h>

int findMax(int num1, int num2) {
    int max = (num1 > num2) ? num1 : num2;
    return max;
}

int main() {
    int a = 10;
    int b = 20;
    int max = findMax(a, b);
    printf("The maximum number is: %d\n", max);
    return 0;
}
