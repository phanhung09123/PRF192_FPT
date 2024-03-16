#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
	int a[6];
	int i;
	
	for (i=0;i<=6;i+=1)
	{
		scanf("%d",&a[i]);
	}
	bubbleSort(a,6);
	
	printf("%d\n",a[5]);
	
	system("pause");
	return 0;
}
