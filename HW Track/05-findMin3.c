#include <stdio.h>

int main() {
    /* INPUT HERE: Input three integer numbers */
    /*  TEST DATA:
        Input first number: 30
        Input second number: 45
        Input third number: 15
    */

int a,b,c;
printf("Input the first number: ");
scanf("%d",&a);
printf("Input the second number: ");
scanf("%d",&b);
printf("Input the third number: ");
scanf("%d",&c);

if (a>b && a>c) {
	printf("%d is the biggest number\n",a);
}

else if (b>a && a>c) {
	printf("%d is the biggest number\n",b);
}
else if (c>a && c>b) {
}
else {
	printf("3 numbers are equal");
}



    /* OUTPUT HERE: Print out the SMALLEST number */
    /*  EXPECTED OUTPUT:
        The smallest number is: 15
    */








    getchar();
    return 0;
}
