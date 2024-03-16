#include <stdio.h>
#include <math.h>
int main() {
    /* INPUT HERE: Input two integer numbers */
    /*  TEST DATA:
        Input two numbers:
        x: 25
        y: 5
    */
	float a;
	int x,y;
	printf("Input an interger: ");
	scanf("%d",&x);
	printf("Input another interger: ");
	scanf("%d",&y);

	if (y==0)
	{
		printf("The division is not possible!");
	}
	else
	{
	a = x/y;
	printf("The divided number is %.1f",a);
	}
	
	/* OUTPUT HERE: Print out the result of division of the first number by second number. 
        If the division not possible print "Division not possible". */
    /*  EXPECTED OUTPUT:
        5.0
    */

    getchar();
    return 0;
}
