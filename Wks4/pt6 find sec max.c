#include <stdio.h>
#include <stdlib.h>

int findSecondMax(int arr[], int size) 
{
    int max = arr[0];
    int secondMax = arr[0];
    int i;

    for (i = 1; i < size; i++) 
	{
        if (arr[i] > max) 
		{
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    
    return secondMax;
}

/* 
-----------find max-------------

int findMax(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]
        }
    }

    return max;
}

*/

int main()
{
	int n;
	printf("How many value u want to store? ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	printf("Input values: ");
	for (i=0;i<n;i+=1)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Recorded values: ");
	for (i=0;i<n;i+=1)
	{
		printf("%d ",a[i]);
	}
	printf("\nSecond max value is: ");
	int secMax = findSecondMax(a,n);
	printf("%d",secMax);
	
	
	system("pause");
	return 0;
}
