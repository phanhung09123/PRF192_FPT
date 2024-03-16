 #include <stdio.h>

int main() {
    /* INPUT HERE: Input an integer number n */
    /*  TEST DATA:
        Input n: 12
    */
int n,i;
printf("Input an interger number: \n");
scanf("%d",&n);


printf("Divisor: \n");
for (i=1;i<=n;i+=1){
	if (n%i==0)
	{
		printf(" %d ",i);
	}
}
// i=1 -> 13 chia het cho 1 -> lay 13
// i=2 -> 13 k chia het cho 2-> k lay 2
//tiep tuc nhu the


    /* OUTPUT HERE: Print out the divisors of n from 0 to n */
    /*  EXPECTED OUTPUT:
        The divisors: 1 2 3 4 6 12
    */








    getchar();
    return 0;
}
