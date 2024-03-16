#include <stdio.h>

int main() {
    /* INPUT HERE: Input two integer numbers a and b */
    /*  TEST DATA:
        Case 1. Input a: 4
                Input b: 5
        Case 2. Input a: 0
                Input b: 5
    */
int a,b;
printf("Input the first interger: ");
scanf("%d",&a);
printf("Input the second interger: ");
scanf("%d",&b);

if (a==0 && b==0)
{
	printf("Both number are equal to zero !");
}
else if ((a!= 0 && b==0) || (a==0 && b!=0))
{
	printf("a or b is equal to zero !");
}
else
{
	printf("a and b are not equal to zero !");
}


    /* OUTPUT HERE: Print out a and b are not equal to 0 or not. */
    /*  EXPECTED OUTPUT:
        Case 1. a and b are not equal to 0
        Case 2. a or b is equal to 0
    */








    getchar();
    return 0;
}
