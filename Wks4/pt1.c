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

	for (i=0;i<n;i+=1)
	{
		printf("%d ",a[i]);
	}
	
	system("pause");
	return 0;
}

