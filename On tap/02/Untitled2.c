#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int n;
	int i;
	int sum=0;
	scanf("%d",&n);
	
	for (i=0;i<=n;i+=1)
	{
		if (i%2==0)
		sum +=i;
	}
	printf("%d\n",sum);
	
	system("pause");
	return 0;
}
