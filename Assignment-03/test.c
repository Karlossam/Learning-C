#include <stdio.h>
#include <stdlib.h>

int main () {
    char *p;
    int n;
    int errno;

    errno = 0;
    n = scanf("%m", &p);
    if (n == 1) {
        printf("read: %s\n", p);
        free(p);
    } else if (errno != 0) {
        perror("scanf");
    } else {
        fprintf(stderr, "No matching characters\n");
    }
}