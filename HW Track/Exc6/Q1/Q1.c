#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;
    
    while (start < end) {
        // Swap elements at start and end indices
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move start index forward and end index backward
        start++;
        end--;
    }
}

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:

int n;
printf("Input n:  ");
scanf("%d",&n);

int a[n];
int i;
for (i=0;i<n;i+=1)
{
	scanf("%d",&a[i]);
}
for (i=0;i<n;i+=1)
{
	printf(" %d ",a[i]);
}

reverseArray(a,i);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    
for (i=0;i<n;i+=1)
{
	printf(" %d ",a[i]);
}

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
