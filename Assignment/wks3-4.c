#include <stdio.h>

double factorial ( int n) {
    double p=1;
    int i;
    for (i=2; i<=n; i++) 
	{
	p = p*i;
	}
	return p;
} 

int main()
{
	int n;	
	printf("Input n: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Should be positive number!");
	}
	else
	{
		double result = factorial(n);
		printf("%.0f",result);
	}
	
	
return 0;
}
