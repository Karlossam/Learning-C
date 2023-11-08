#include <math.h>
#include <stdio.h>

int main() {
    // Inputs
    int a, b, c;
    printf("Enter the value of variable 'A': ");
    scanf("%i",&a);
    printf("Enter the value of variable 'B': ");
    scanf("%i",&b);
    printf("Enter the value of variable 'C': ");
    scanf("%i",&c);
    // Formula con resultado + y -
    float positive = ((-1 * b) + (sqrt(b*b - (4*a*c)))) / (2*a);
    float negative = ((-1 * b) - (sqrt(b*b - (4*a*c)))) / (2*a);
    // Checks
    float reversed_positive = a*(positive*positive) + b*positive + c;
    float reversed_negative = a*(negative*negative) + b*negative + c;

    if (reversed_negative != 0 || reversed_positive != 0) {
        printf("The solution using the '+' operator is: %f, but you might want to double-check that...\n", positive);
        printf  ("The solution using the '-' operator is: %f, but you might want to double-check that...\n", negative);
    } else {
    // Outputs
        printf("The solution using the '+' operator is: %f\n", positive);
        printf("The solution using the '-' operator is: %f\n", negative);
    }
    return 0;
}