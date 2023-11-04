#include <stdio.h>

int main () {
    // Input seconds
    printf("Enter de amount of seconds: ");
    int input_seconds;
    scanf("%i", &input_seconds);
    // Sacar horas minutos y segundos mediante modulo
    int hours = input_seconds / 3600;
    int minutes = (input_seconds - (hours * 3600)) / 60;
    int seconds = input_seconds - ((hours * 3600) + (minutes * 60));
    // Output
    printf("%d is equal to %d hours, %d minutes, and %d seconds.\n", input_seconds, hours, minutes, seconds);

    return 0;
}