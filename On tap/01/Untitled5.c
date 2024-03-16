#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void dupsum(int a[], int n, int sum)
{
	int i;
	int j;
	int found = 0;
	for (i=0;i<n;i+=1)
	{
		for (j=i+1 ;j<n;j+=1)
		{
			if (a[i]+a[j]==sum)
			{
				printf("\n");
				printf("%d\n",a[i]);
				printf("%d\n",a[j]);
				found = 1;
				return;
			}
			else
			{
				
			}
		}
	}
	if (!found)
	{
		printf("None\n");
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	
	printf("\n");
	printf("\n");
	int sum;
	scanf("%d",&sum);
	
	printf("\n");
	printf("\n");
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
