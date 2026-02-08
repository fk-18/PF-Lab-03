#include <stdio.h>

int main() {
    int number;
    float decimal;
    char letter;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter a float: ");
    scanf("%f", &decimal);

    printf("Enter a character: ");
    scanf(" %c", &letter);   // space before %c is important

    printf("\nYou entered:\n");
    printf("Integer: %d\n", number);
    printf("Float: %.2f\n", decimal);
    printf("Character: %c\n", letter);

    return 0;
}
