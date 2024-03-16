#include <stdio.h>

int main() {
    /* INPUT HERE: Input an integer number n */
    /*  TEST DATA:
        Input n: 38
    */

int n,i;
printf("Input an interger: \n");
scanf("%d",&n);

for (i=n;i<=100;i+=1)
	{
		if(i%10==0)
		{
			printf(" %d ",i);
		}
	}


    /* OUTPUT HERE: Print out numbers end with 0 from n to 100 */
    /*  EXPECTED OUTPUT:
        Numbers: 40 50 60 70 80 90 100
    */








    getchar();
    return 0;
}
