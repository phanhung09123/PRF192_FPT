#include <stdio.h>

int main() {
    /* INPUT HERE: Input student score */
    /*  TEST DATA:
        Input a number: 7
    */
int a;
printf("Input a score: ");
scanf("%d",&a);

if (a>=0 && a<10)
{
	printf("The score is valid: ");
}
else {
	printf("The score is not valid, should be in range of [0;10]");
}



    /* OUTPUT HERE: Print out the score is valid or not (valid range [0...10]) */
    /*  EXPECTED OUTPUT:
        The score is valid.
    */








    getchar();
    return 0;
}
