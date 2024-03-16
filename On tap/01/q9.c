#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int a[n][n];
	int i,j;
	for (i=0;i<n;i+=1)
	{
		for (j=0;j<n;j+=1)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	int sum=0;
	for (i=0;i<n;i+=1)
	{
		sum += a[i][i];
	}
	
	printf("\n%d\n",sum);
	system("pause");
	return 0;
}
