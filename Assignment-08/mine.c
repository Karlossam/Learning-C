#include <stdio.h>

int main () {
    int num;
    printf("Enter a number between 1 and 500: ");
    scanf("%i", &num);
    if (1 < num && num < 100) {
        printf("Your number is between 1 and 100!\n");
    } else if (100 < num && num < 200) {
        printf("Your number is between 101 and 200!\n");
    } else if (200 < num && num < 300) {
        printf("Your number is between 201 and 300!\n");
    } else if (300 < num && num < 400) {
        printf("Your number is between 301 and 400!\n");
    } else if (400 < num && num < 500) {
        printf("Your number is between 401 and 500!\n");
    } else {
        printf("Your mom!\n");
    }
    return 0;
}