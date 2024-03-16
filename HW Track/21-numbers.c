#include <stdio.h>

int main() {
    /* INPUT HERE: Input an integer number n */
    /*  TEST DATA:
        Input a number: 5
    */
int n,a,i;
printf("Input an interger number: ");
scanf("%d",&n);

for (i=-n; i<=n; i+=1)
{
	printf( " %d " ,i);
}



    /* OUTPUT HERE: Print out numbers from -n to n */
    /*  EXPECTED OUTPUT:
        -5 -4 -3 -2 -1 0 1 2 3 4 5
    */








    getchar();
    return 0;
}
