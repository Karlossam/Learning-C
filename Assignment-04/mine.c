#include <stdio.h>

#define PIE 3.14

int main () {
    // Input del radio
    printf("Enter the radius of your circle: ");
    float radius;
    scanf("%f", &radius);
    // Formula circulo
    float area = PIE * (radius * radius);
    // Output y return
    printf("The area of your circle is %f\n", area);
    return 0;
}