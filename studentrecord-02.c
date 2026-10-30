#include <stdio.h>
#include <stdlib.h>

struct Date {
    int d, m, y;
};

struct Students {
    int roll;
    struct Date dob;
};

int main() {
    struct Students S = {101, {15, 8, 2025}};

    printf("Roll Number: %d\n", S.roll);
    printf("Date of Birth: %d/%d/%d\n",
           S.dob.d, S.dob.m, S.dob.y);

    return 0;
}