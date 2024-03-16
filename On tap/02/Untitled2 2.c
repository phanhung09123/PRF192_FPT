#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	if (n<10)
	{
		p=n+n;
		printf("%d",p);
	}
	else 
	{
		int donvi = n % 10;
		int sum=0;
		int m=n;
		for (;m >= 10 ;m /= 10)
		{
			
		}
		sum = donvi + m;
		printf("%d",sum);
	}
	
	system("pause");
	return 0;	
}
