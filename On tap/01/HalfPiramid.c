#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void in_hinh_chop_tam_giac(int rows) {
    int i, j, k;
    for (i = 1; i <= rows; i++) {
        // In kho?ng tr?ng d? d?ch chuy?n các s? sang ph?i
        for (k = i; k < rows; k++) {
            printf("  ");
        }
        // In s? ho?c kho?ng tr?ng tùy thu?c vào v? trí trên hàng
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == rows) {
                printf("%d ", j);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void halftri(int n)
{
	int i;
	int j;
	for (i=1;i<=n;i+=1)
	{
		for (j=1;j<=i;j+=1)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	
	halftri(n);
	printf("\n");
	in_hinh_chop_tam_giac(n);
	
	system("pause");
	return 0;
}
