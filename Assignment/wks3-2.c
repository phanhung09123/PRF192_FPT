#include <stdio.h>
#include <time.h>

int validDate ( int d, int m, int y) {
        int maxd = 31; /*max day of months 1, 3, 5, 7, 8, 10, 12 */
/* basic checking */
if ( d<1 || d>31 || m<1 || m>12) return 0;
/* update maxd of a month */
if ( m==4 || m==6 || m==9 || m==11) maxd=30;
else if (m==2) {
            /* leap year? */
             if ( y%400==0 || ( y%4==0 && y%100!=0)) maxd=29;
             else maxd=28;
       }
return d<=maxd; 
}  

int main()
{
	int d,m,y;
	printf("Input a date (DD MM YYYY): ");
	scanf("%d %d %d",&d, &m, &y);
	
	if ((validDate(d,m,y)!=0))
	{
	printf("Valid date broo");
	}
	else
	{
	printf("That aint valid bro");
	}
}
