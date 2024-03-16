#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:


int n;
int k;
printf("Input n:  ");
scanf("%d",&n);

printf("Input k:  ");
scanf("%d",&k);


int i,a[n];
for(i=0;i<n;i+=1)
{
	scanf("%d",&a[i]);
}

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    
int printed=0;
for (i=0;i<n;i+=1)
{
	if (a[i]==k && !printed)
	{
	printf("%d",a[i]);
	printed = 1;
	break;
	}

}



    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
