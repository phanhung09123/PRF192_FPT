#include <stdio.h>
#include <math.h>
int main() {
    /* INPUT HERE: Input an integer number n */
    /*  TEST DATA:
        Input n: 5
    */

 int n,i;

    printf("Input an integer number: \n");
    scanf("%d", &n);

for (i=1; i<=n; i+=1) 
{
	printf("Cube of %d is: %d\n",i, i*i*i);
}


    /* OUTPUT HERE: Print out cube of number from 1 to n */
    /*  EXPECTED OUTPUT:
        Cube of 1 is: 1
        Cube of 2 is: 8
        Cube of 3 is: 27
        Cube of 4 is: 64
        Cube of 5 is: 125
    */








    getchar();
    return 0;
}
