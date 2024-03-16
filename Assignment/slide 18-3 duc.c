#include <stdio.h>

int main() {

	char *p = (char*)207000;
	
    printf("p + 8 = %u", p + 8);
    printf("\n");
    printf("p - 3 = %u", p - 3);
    printf("\n");
    p++;

    printf("After p++: \np = %u", p);

    return 0;
}

