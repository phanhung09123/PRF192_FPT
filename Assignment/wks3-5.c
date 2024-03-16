#include <stdio.h>

double fibo ( int n) {
    int t1=1, t2=1, f=1, i ;
   for ( i= 3; i<=n; i++) {
      f= t1 + t2;
      t1= t2;
      t2=f;
   }
   return f;
} 

int main()
{
	int n;
	printf("Input a number: ");
	scanf("%d",&n);
	if (n<0)
	{
		printf("Number must be positive");
	}
	else
	{
		double result=fibo(n);
		printf("%.0lf",result);
	}
return 0;
}
