#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float marks;
} Student;

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    Student *students = (Student *)malloc(n * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

 
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

   
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    
    free(students);

    return 0;
}
