#include <stdio.h>


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int T[] = {7, 1, 5, 5, 3, 8, 6};
    int N = 7;

    selectionSort(T, N);

    printf("Hasil Selection Sort: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
	
