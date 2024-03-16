#include <stdio.h>

int main() {
    /* INPUT HERE: Input two integer numbers */
    /*  TEST DATA:
        Input first number: 6
        Input second number: 8
    */
int a,b,c;
printf("Input 2 unterger numbers respectively:\n ");
scanf("%d %d",&a, &b);
printf("Recorded input\n");
printf("The first number: %d\n",a);
printf("The second number: %d\n",b);
printf("\n");

a=c;
b=a;
c=b;

printf("After swapping\n");
printf("First number: %d\n",b);
printf("Second number: %d\n",c);
   



    /* OUTPUT HERE: Print out the expression value (based on operator) */
    /*  EXPECTED OUTPUT:
        After swapping
        First number: 8
        Second number: 6
    */








    getchar();
    return 0;
}
