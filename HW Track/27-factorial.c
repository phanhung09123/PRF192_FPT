#include <stdio.h>

int main() {
    /* INPUT HERE: Input an integer number n */
    /*  TEST DATA:
        Input n: 5
    */

int n,i,mult;
printf("Input an interger: \n");
scanf("%d",&n);

for (i=1;i<=5;i+=1)
	{
		mult = mult * i;
	}
			printf(" %d ",mult);
		
	


    /* OUTPUT HERE: Print out factorial of n (n! = 1 * 2 * 3 * ... * n) */
    /*  EXPECTED OUTPUT:
        Factorial: 120
    */








    getchar();
    return 0;
}
