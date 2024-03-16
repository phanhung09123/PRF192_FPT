#include <stdio.h>

int main() {
    /* INPUT HERE: Input two integer numbers */
    /*  TEST DATA:
        Input first number: 30
        Input second number: 45
    */
int a,b;
printf("Type in the first number: ");
scanf("%d",&a);
printf("Type in the second number: ");
scanf("%d",&b);

if (a-b>0){
	printf("%d is the larger number\n",a);
}
else if (a-b==0){
	printf("2 number are equal");
	}
else {
	printf("%d is the larger number\n", b);
	}



    /* OUTPUT HERE: Print out the LARGER number */
    /*  EXPECTED OUTPUT:
        The larger number is: 45
    */



    getchar();
    return 0;
}
