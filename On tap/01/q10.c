#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int sum=1;
	for (;n>0;n/=10)
	{
		sum*=n%10;
	}
	
	printf("\n%d\n",sum);
	
	system("pause");
	return 0; 
}
