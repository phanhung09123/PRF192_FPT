#include <stdio.h>
#include <stdlib.h>

int* mergeArrays(int arr1[], int size1, int arr2[], int size2) {
    int *mergedArr = (int *)malloc((size1 + size2) * sizeof(int));
    
    if (mergedArr == NULL) {
        printf("Memory allocation failed.");
        exit(1);
    }

    int i = 0, j = 0, k = 0;

    // Merge elements until one of the arrays is exhausted
    while (i < size1 && j < size2) {
        mergedArr[k++] = arr1[i++];
        mergedArr[k++] = arr2[j++];
    }

    // If elements remain in the first array, copy them to mergedArr
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }

    // If elements remain in the second array, copy them to mergedArr
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }

    return mergedArr;
}

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{	
	int n;
	printf("How many elements u want to store in both array ?:  ");
	scanf("%d",&n);
	int size = 2*n;
	int arr[size];
	int a1[n];
	int a2[n];
	int i,j;
	printf("Input values for the first array: ");
	for (i=0;i<n;i+=1)
	{
		scanf("%d",&a1[i]);
	}
		printf("Input values for the second array: ");
	for (i=0;i<n;i+=1)
	{
		scanf("%d",&a2[i]);
	}
	printf("\n");
	printf("Recoded values: ");
	printf("\nFirst array: ");

	for (i=0;i<n;i+=1)
	{
		printf("%d ",a1[i]);
	}
	printf("\nSecond array: ");
		for (i=0;i<n;i+=1)
	{
		printf("%d ",a2[i]);
	}	
	printf("\n");
	int *mergedArr = mergeArrays(a1, n, a2, n);
	printf("Merged array: ");
	for (i = 0; i < n+n; i+=1) 
	{
    printf("%d ", mergedArr[i]);
	}
	bubbleSort(mergedArr,size);
	printf("\nMerged and sorted array: ");
	for (i = 0; i < n+n; i+=1) 
	{
    printf("%d ", mergedArr[i]);
	}
	

	
	system("pause");
	return 0;
}

