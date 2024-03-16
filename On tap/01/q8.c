#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void inPhanTuXuatHienNhieuNhat(int arr[], int size) {
    int maxCount = 0;
    int mostFrequentElement;
    int i, j;
    
    for (i = 0; i < size; i++) {
        int count = 0;
        for (j = 0; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequentElement = arr[i];
        }
    }

    printf("%d\n", mostFrequentElement);
}


int main()
{
	int a[7];
	int i;
	for (i=0;i<7;i+=1)
	{
		scanf("%d",&a[i]);
	}
	int j=0;
	int b[7];
	for (i=0;i<7;i+=1)
	{
		if (a[i]>=10 && a[i]<=99)
		{
			b[j]=a[i];
			j++;
		}
	}
	inPhanTuXuatHienNhieuNhat(b,j);
	
	system("pause");
	return 0;
}
