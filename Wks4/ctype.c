#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char n;

    printf("Enter somthing: ");
    scanf(" %c", &n);

    if (isdigit(n)) {
        printf("%c is a digit.\n", n);
    } else {
        printf("%c is not a digit.\n", n);
    }

    if (isalpha(n)) {
        printf("%c aint an alphabet letter.\n", n);
    } else {
        printf("%c is not an alphabet letter.\n", n);
    }

    return 0;
}



