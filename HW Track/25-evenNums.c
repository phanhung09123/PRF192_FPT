#include <stdio.h>

int main() {
    /* INPUT HERE: Input an integer number n */
    /*  TEST DATA:
        Input n: 90
    */
int n,i;
printf("Input an interger: \n");
scanf("%d",&n);

for (i=n;i<=100;i+=1)
	{
		if(i%2==0)
		{
			printf(" %d ",i);
		}
	}


    /* OUTPUT HERE: Print out even numbers from n to 100 */
    /*  EXPECTED OUTPUT:
        Even numbers: 90 92 94 96 98 100
    */








    getchar();
    return 0;
}
