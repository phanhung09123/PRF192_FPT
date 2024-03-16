#include <stdio.h>

int sumDigits (int n)
{   int sum=0; /* initialize sum of digits */
     do
        {  int remainder = n%10 ; /* Get a digit at unit position */
      n = n/10;
      sum += remainder;
   }
	while (n>0);
return sum;
}

int main()
{
	int n;
	printf("Input a numero: ");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("The numero should be positive");
	}
	else
	{
		int result=sumDigits(n);
		printf("%d",result);
	}
return 0;
}
