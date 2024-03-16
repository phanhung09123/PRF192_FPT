#include <stdio.h>
#include <math.h>


int  prime( int n ) {
     int m = sqrt(n); /* m: square root of n */
      int i;  /* variable having value from 2 to m  */ 
     if (n<2) return 0; /* Condition 1 is not satisfied */
     for ( i=2; i<=m; i++) /* checking the second condition */
         if (n%i==0) return 0 ; /* n is divided by i ' n is not a prime */
     return 1; /* n is a prime */ 
}
int main()
{
	int n;
	int stn;
	printf("Input a number: ");
	scanf("%d",&stn);
	
	if (stn<2)
	{
		printf("Should be bigger than 1!");
	}
	else
	{
	for (n=0;n<=stn;n+=1)
	{
		if(prime(n)!=0)
		{
			printf(" %d ",n);
		}
	}
	
}
}
