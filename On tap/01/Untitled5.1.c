#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void dupsum(int a[], int n, int sum)
{
	int i;
	int j;
	for (i=0;i<n;i+=1)
	{
		for (j=i+1 ;j<n;j+=1)
		{
			if (a[i]+a[j]==sum)
			{
				printf("%d",a[i]);
				printf("%d",a[j]);
				return;
			}
		}
	}
	printf("None\n");
}

int main()
{
	int n;
	scanf("%d",&n);
	
	int sum;
	scanf("%d",&sum);
	
	int a[n];
	int i;
	for (i=0;i<n;i+=1)
	{
		scanf("%d",&a[i]);
	}
	
	dupsum(a,n,sum);
	
	system("pause");
	return 0;
}
