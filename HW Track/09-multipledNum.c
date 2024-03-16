#include <stdio.h>

int main() {
    /* INPUT HERE: Input two integer numbers */
    /*  TEST DATA:
        Input the first number: 5
        Input the second number: 15
    */

    int num1, num2;

    printf("Input the first number: ");
    scanf("%d", &num1);

    printf("Input the second number: ");
    scanf("%d", &num2);

    /* OUTPUT HERE: Print out they are multiplied or not. 
        Print even if the number is 0. */
    /*  EXPECTED OUTPUT:
        The numbers are Multiplied!
    */

    if (num1 * num2 != 0) {
        printf("The numbers are Multiplied!\n");
    } else {
        printf("Even");
    }

    return 0;
}

