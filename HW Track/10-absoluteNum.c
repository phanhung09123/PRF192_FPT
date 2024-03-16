#include <stdio.h>

int main() {
    /* INPUT HERE: Input one integer number */
    /*  TEST DATA:
        Input number (positive or negative): -15
    */
int a,b;
printf("Input one interger: ");
scanf("%d",&a);

if (a<0) {
	b=a+(0-a)+(0-a);
	printf("The absolute value of number is %d", b);
}
else {
	printf("The absolut value of number is %d",a);
}



    /* OUTPUT HERE: Print out the absolute value of number */
    /*  EXPECTED OUTPUT:
        The absolute value of number is: 15
    */








    getchar();
    return 0;
}
