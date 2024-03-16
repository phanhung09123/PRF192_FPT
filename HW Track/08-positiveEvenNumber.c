#include <stdio.h>

int main() {
    /* INPUT HERE: Input one integer number */
    /*  TEST DATA:
        Input an integer: 13
    */

int inp,a,b,c,d;

printf("Input one interger number: ");
scanf("%d",&inp);

if (inp==0)
{
printf("The number is neither postivive or negative, its a damnn ZERO, even"); 
}
else
{

if (inp%2==0) {
	printf("The interger is even");
}

else {
	printf("The interger is odd");
}

if (inp >= 0) {
	printf(", positive");
	
}
else {
	printf(", negative");
}
}

    /* OUTPUT HERE: Print out the given number is positive even, 
        negative even, positive odd or negative odd. 
        Print even if the number is 0. */
    /*  EXPECTED OUTPUT:
        The number is Positive Odd
    */

    getchar();
    return 0;
}
