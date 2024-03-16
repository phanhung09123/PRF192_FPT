#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:

int n;
printf("Nhap so phan tu cua mang:  ");
scanf("%d",&n);

int i,a[n];
for (i=0;i<n;i+=1)
{
	scanf("%d",&a[i]);
}

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    
bubbleSort(a,n);
for (i=0;i<n;i+=1)
{
	printf("%d ",a[i]);
}
    
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
