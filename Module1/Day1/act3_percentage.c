#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float physicsMarks, mathMarks, chemMarks;
    float totalMarks, percentage;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %s", name); 

    printf("Enter Physics Marks: ");
    scanf("%f", &physicsMarks);

    printf("Enter Math Marks: ");
    scanf("%f", &mathMarks);

    printf("Enter Chemistry Marks: ");
    scanf("%f", &chemMarks);

    totalMarks = physicsMarks + mathMarks + chemMarks;
    percentage = (totalMarks / 300) * 100;

    printf("\nRoll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
