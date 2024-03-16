#include <stdio.h>

int main() {
    int n, m;
    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    // Khai b�o m?ng hai chi?u v?i k�ch thu?c n h�ng v� m c?t
    int arr[n][m];

    // G�n gi� tr? cho m?ng
    printf("Nhap cac phan tu cua mang:\n");
    int i, j; // Khai b�o bi?n i v� j ? d?u kh?i m�
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    // In m?ng hai chi?u
    printf("Mang 2 chieu:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

