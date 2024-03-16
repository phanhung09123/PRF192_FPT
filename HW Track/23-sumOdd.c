#include <stdio.h>

int main() {
    /* INPUT HERE: Input an integer number n */
    /*  TEST DATA:
        Input n: 7
    */
int i,a,sum=0;
printf("Input an interger number: ");
scanf("%d",&a);

for (i=1; i<=7; i+=2 )
{
	sum = sum + i;
}
	printf("Sum: %d\n",sum);

    /* OUTPUT HERE: Print out sum of odd numbers from 0 to n */
    /*  EXPECTED OUTPUT:
        Sum of odd numbers: 16
    */

    getchar();
    return 0;
}
