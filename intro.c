#include <stdio.h>

int main() {
    double number;

    printf("Enter a double value: ");
    scanf("%lf", &number);

    printf("\nDefault precision: %lf\n", number);
    printf("Two decimal places: %.2lf\n", number);
    printf("Five decimal places: %.5lf\n", number);

    return 0;
}
