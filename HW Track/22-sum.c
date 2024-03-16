#include <stdio.h>

int main() {
    /* INPUT HERE: Input two integer numbers a and b */
    /*  TEST DATA:
        Input a: 5
        Input b: 9
    */
int sum,i,a,b,c;
printf("Enter 2 number a and b: \n");
scanf("%d %d",&a,&b);

if (a>b)
{
	printf("a is bigger than b, switching position...\n");
	c=a;
	a=b;
	b=c;
	printf("now a is %d and b is %d\n", a,b);
	
	for (i=a; i<=b; i+=1){
		sum=sum+i;
	}
	printf("The sum of numbers from a to b is %d\n",sum);
}
else if (a==b)
{
	printf("The sum of numbers from a to b is 0");
}
else
{
	for (i=a; i<=b; i+=1)
	{
		sum=sum+i;
	}
	printf("The sum of numbers from a to b is %d\n",sum);
}
    /* OUTPUT HERE: Print out sum of numbers from a to b */
    /*  EXPECTED OUTPUT:
        Sum of numbers: 35
    */

    getchar();
    return 0;
}
