#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:

int a[10],i,sum,n;
int phantudautien;
int phantucuoicung;

printf("Nhap n:  ");
scanf("%d",&n);
for (i=0;i<n;i+=1)
{
	scanf("%d",&a[i]);
}
phantudautien=a[0];
phantucuoicung=a[n-1];
sum=phantudautien+phantucuoicung;

    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    

printf("%d",sum);

    

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
