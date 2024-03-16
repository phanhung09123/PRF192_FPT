#include <stdio.h>
#include <stdlib.h>

main()
{
	int n;
	printf("How many elements u want to store ?:  ");
	scanf("%d",&n);
	int a[n];
	int i;
	for (i=0;i<n;i+=1)
	{
		scanf("%d",&a[i]);
	}

	printf("\n");
	printf("Recoded values: ");

	for (i=0;i<n;i+=1)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n");
	int sum=0;
	printf("Sum of value:");
	for (i=0;i<n;i+=1)
	{
		sum+=a[i];
	}
	printf(" %d ",sum);
	
	system("pause");
	return 0;
}

