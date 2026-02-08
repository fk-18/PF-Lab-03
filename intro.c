#include <stdio.h>

int main() {
    int age = 18;
    float height = 5.4f;
    double gpa = 3.75;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("GPA: %.2lf\n", gpa);
    printf("Grade: %c\n", grade);

    return 0;
}
