#include <stdio.h>

int isFibonacci (int n) 
{    int t1=1, t2=1, f=1;
   if (n==1) return 1; /* n belongs to the Fibonacci sequence*/
   while (f<n)           /* Find out the Fibo number f to n */
   {   f= t1 + t2;
       t1=t2;
       t2=f;
   }  
   return n==f;  /* if n==f ' n is Fibo element ' return 1 */
}

int main()
{
	int n;
	printf("Input a positive number: ");
	scanf("%d", &n);
	if (n<0)
	{
		printf("Must be positive!!");
	}
	else
	{
		if(isFibonacci(n)==1)
		{
			printf("The number is a fibonacci element!");
		}
		else
		{
			printf("That aint a fibonacci element");
		}
	}
return 0;
}
