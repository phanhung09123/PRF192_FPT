#include <stdio.h>

int main() {
    /* INPUT HERE: Input one integer three digits number */
    /*  TEST DATA:
        Input number: 375
    */
    
int sum,a,b,c,inter;
printf ("Input an interger ( 3 digits ): ");
scanf("%d",&inter);

a = inter % 10; //chia lay phan don vi
b = (inter / 10) % 10;  //chia lay phan chuc
c = inter / 100;  //chia lay phan tram
sum=a+b+c;

printf("%d is the sum\n",sum);


    /* OUTPUT HERE: Print out the SUM of DIGITS of number */
    /*  EXPECTED OUTPUT:
        The sum of digits: 15.
    */
    
    getchar();
    return 0;
}
