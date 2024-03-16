#include <stdio.h>

int main() {

	double *p = (double*)1200;


    printf("p + 8 = %u", p + 8);
    printf("\n");
    printf("p - 3 = %u", p - 3);
    printf("\n");
    p++;

    printf("After p++: \np = %u", p);

    return 0;
}

