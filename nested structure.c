#include <stdio.h>

struct Students {
    int roll_number;
    char name[50];
    float marks;
};

int main()
{
    struct Students S1;

    printf("Enter the roll number: ");
    scanf("%d", &S1.roll_number);

    printf("Enter the student name: ");
    scanf("%49s", S1.name);

    printf("Enter the student marks: ");
    scanf("%f", &S1.marks);

    printf("\nRoll Number: %d\n", S1.roll_number);
    printf("Name: %s\n", S1.name);
    printf("Marks: %.2f\n", S1.marks);

    return 0;
}