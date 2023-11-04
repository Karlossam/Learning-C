#include <stdio.h>

int main () {
    printf("Enter de numerator: ");
    int numerator;
    scanf("%i", &numerator);
    printf("Enter de denominator: ");
    int denominator;
    scanf("%i", &denominator);

    if ((numerator % denominator) != 0) {
        printf("There is a reminder!\n");
    } else {
        printf("There is NOT a reminder!\n");
    }
    return 0;
}