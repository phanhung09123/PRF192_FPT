#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// Hàm ki?m tra m?ng dã s?p x?p chua
bool isSorted(int arr[], int n) {
    int i;
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

// Hàm tr?n l?i các ph?n t? trong m?ng
void shuffle(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        int j = rand() % n;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// Thu?t toán Bogo Sort
void bogoSort(int arr[], int n) {
    srand(time(NULL));
    while (!isSorted(arr, n)) {
        shuffle(arr, n);
    }
}

// Thu?t toán Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        
        int j;
        for (j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        
        int pi = i + 1;
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Hàm d?m th?i gian và s?p x?p m?ng b?ng Bogo Sort
void bogoSortWithTime(int arr[], int n) {
    clock_t start, end;
    double cpu_time_used;
    
    start = clock();
    bogoSort(arr, n);
    end = clock();
    
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    
    printf("Th?i gian s?p x?p b?ng Bogo Sort: %f giây\n", cpu_time_used);
}

// Hàm d?m th?i gian và s?p x?p m?ng b?ng Quick Sort
void quickSortWithTime(int arr[], int n) {
    clock_t start, end;
    double cpu_time_used;
    
    start = clock();
    quickSort(arr, 0, n - 1);
    end = clock();
    
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    
    printf("Th?i gian s?p x?p b?ng Quick Sort: %f giây\n", cpu_time_used);
}

int main() {
    int n;
    printf("Nh?p s? lu?ng ph?n t? c?a m?ng: ");
    scanf("%d", &n);
    
    int arr_bogo[n];
    int arr_quick[n];
    
    printf("Nh?p các ph?n t? c?a m?ng:\n");
    int i;
    for (i = 0; i < n; i++) {
        printf("Ph?n t? %d: ", i + 1);
        scanf("%d", &arr_bogo[i]);
        arr_quick[i] = arr_bogo[i];
    }
    
    printf("M?ng tru?c khi s?p x?p:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr_bogo[i]);
    }
    printf("\n");
    
    printf("\nS?p x?p b?ng Bogo Sort:\n");
    bogoSortWithTime(arr_bogo, n);
    printf("M?ng sau khi s?p x?p:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr_bogo[i]);
    }
    printf("\n");
    
    printf("\nS?p x?p b?ng Quick Sort:\n");
    quickSortWithTime(arr_quick, n);
    printf("M?ng sau khi s?p x?p:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr_quick[i]);
    }
    printf("\n");
    
    return 0;
}

