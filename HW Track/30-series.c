#include <stdio.h>

int main() {
    /* INPUT HERE: Input an integer number n */
    /*  TEST DATA:
        Input n: 5
    */
    
    
int a,i,b,sum=0,num=0;
printf("Input an interger:");
scanf("%d",&a);

for (i=0;i<=a;i+=1)
{
	sum = num+ i;
	num = num *10 +9;
	printf(" %d ",num);
}
printf("\n");
printf(" %d ",sum);

    /* OUTPUT HERE: Print out sum of [9 + 99 + 999 + ...] */
    /*  EXPECTED OUTPUT:
        9 99 999 9999 99999
        Sum of series: 111105
    */








    getchar();
    return 0;
}
