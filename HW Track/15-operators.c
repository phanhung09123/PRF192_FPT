#include <stdio.h>
#include <math.h>

int main() {
    int a, b, ans;
    char c;

    printf("Input 2 integers and an operator respectively: ");
    scanf("%d %d %c", &a, &b, &c);

    if (c == '+') {
        ans = a + b;
        printf("Expression value is: %d", ans);
    } else if (c == '-') {
        ans = a - b;
        printf("Expression value is: %d", ans);
    } else if (c == '*') {
        ans = a * b;
        printf("Expression value is: %d", ans);
    } else if (c == '/') {
        // Check if the denominator is not zero
        if (b != 0) {
            ans = a / b;
            printf("Expression value is: %d", ans);
        } else {
            printf("Division by zero is undefined!");
        }
    } else {
        printf("Unknown operator!!!");
    }

    return 0;
}

/* INPUT HERE: Input two integer numbers and operators (character +, -, *, /) */
    /*  TEST DATA:
        Input expression: 6 + 8
    */
    
    
	/* OUTPUT HERE: Print out the expression value (based on operator) */
    /*  EXPECTED OUTPUT:
        Expression value is: 14
    */
