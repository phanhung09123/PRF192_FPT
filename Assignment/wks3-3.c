#include <stdio.h>
#include <math.h>

int getRelPos ( double x, double y, double r) {
   double d2=x*x + y*y;  /* d2= x2+ y2  */
   double r2= r*r;            /* r2*/  
   if (d2<r2) return 1 ; /* d2<r2 'the point is in the circle */
   else if (d2==r2) return 0 ; /* d2=r2 'the point is on the circle */
   return -1 ; /* d2 > r2 'the point is out of the circle */
}

int main()
{
	double x,y,r;
	printf("Input a point (X,Y): \n");
	scanf("%lf %lf",&x,&y);
	
	printf("Input circle radius: \n");
	scanf("%lf",&r);
	
	if (getRelPos(x,y,r)==1)
	{
		printf("The point is in the circle");
	}
	else if (getRelPos(x,y,r)==0)
	{
		printf("The point is on the circle");
	}
	else
	{
		printf("The point is out of the circle");
	}
}
