#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
for (i=0;i<n;i+=1)
{
	if (a[i]%2==0)
	{
		printf(" %d ",a[i]);
	}
	
}


    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    



    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
