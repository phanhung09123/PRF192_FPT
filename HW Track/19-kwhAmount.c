#include <stdio.h>
#include <math.h>
int main() {
    /* INPUT HERE: Input number of kw */
    /*  TEST DATA:
        Input number of kw: 120
    */
int a,b;
printf("Input number of kw:");
scanf("%d",&a);

if (a<=100)
{
	b= 2000*a;
	printf("You have to pay: %d",b);
}
else
{
	b= 200000+(a-100)*2500;
	printf("You have to pay: %d",b);
}
   



    /* OUTPUT HERE: Print out amount to pay.
        kwh <= 100  : price 2000/1kw
        100<kwh     : price 2500/1kw */
    /*  EXPECTED OUTPUT:
        You have to paid: 250000
    */








    getchar();
    return 0;
}
