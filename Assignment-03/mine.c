#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter your first name: ");
    char *first_name;
    int m;
    m = scanf("%ms", &first_name);
    
    printf("Enter your last name: ");
    char *last_name;
    int n;
    n = scanf("%ms", &last_name);

    int errno = 0;
    if (n == 1 && m == 1) {
        printf("Hello %s %s!\n", first_name, last_name);
        free(first_name);
        free(last_name);
    } else if (errno != 0) {
        perror("scanf");
    } else {
        fprintf(stderr, "No matching characters\n");
    }
    return 0;
}