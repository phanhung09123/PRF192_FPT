#include <stdio.h>
#define PI 3.14
int main() {
    /* INPUT HERE: Input a year */
    /*  TEST DATA:
        Input a year: 2000
    */
int year;
printf("Input a year: ");
scanf("%d",&year);

if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
{ printf("The year is a leap year with 366 days");
}
else
{
	printf("The year is a normal year with 365 days");
}

   



    /* OUTPUT HERE: Print out number of days or inpputed year.
        --Normal year: 365 days
        --Leap year: 366 days 
            (divisible by 400) or 
            (divisible by 4 but not divisible by 100) */
    /*  EXPECTED OUTPUT:
        Your year has: 366 days.
    */








    getchar();
    return 0;
}
