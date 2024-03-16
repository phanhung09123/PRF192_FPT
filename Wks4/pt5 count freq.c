#include <stdio.h>
#include <stdlib.h>

void countFrequency(int arr[], int size) {
    int visited[size];
    int i, j;

    for (i = 0; i < size; i++) {
        visited[i] = -1;
    }
    
    for (i = 0; i < size; i++) {
        int count = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 0;
            }
        }
        
        if (visited[i] != 0) {
            visited[i] = count;
            printf("%d occurs %d times\n", arr[i], visited[i]);
        }
    }
}

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
	
	countFrequency(a,n);
	
	
	
	
	system("pause");
	return 0;
}
