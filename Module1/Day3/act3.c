#include <stdio.h>
#include <stdlib.h>

int findLargestNumber(int num) {
    int maxNum = -1;
    char numStr[5];
    sprintf(numStr, "%d", num);

    for (int i = 0; i < 4; i++) {
        char newNumStr[4];
        int index = 0;

        for (int j = 0; j < 4; j++) {
            if (j != i) {
                newNumStr[index++] = numStr[j];
            }
        }

        newNumStr[3] = '\0';
        int newNum = atoi(newNumStr);

        if (newNum > maxNum) {
            maxNum = newNum;
        }
    }

    return maxNum;
}

int main() {
    int num1 = 5872;
    int largest1 = findLargestNumber(num1);
    printf("Largest number after deleting a digit from %d: %d\n", num1, largest1);

    int num2 = 9856;
    int largest2 = findLargestNumber(num2);
    printf("Largest number after deleting a digit from %d: %d\n", num2, largest2);

    return 0;
}
