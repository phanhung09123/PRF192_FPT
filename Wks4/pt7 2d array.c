#include <stdio.h>

int main() {
    int n, m;
    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    // Khai báo m?ng hai chi?u v?i kích thu?c n hàng và m c?t
    int arr[n][m];

    // Gán giá tr? cho m?ng
    printf("Nhap cac phan tu cua mang:\n");
    int i, j; // Khai báo bi?n i và j ? d?u kh?i mã
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

