#include <stdio.h>


void countSort(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int count[max + 1];
    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    int T[] = {7, 1, 5, 5, 3, 8, 6};
    int N = 7;

    countSort(T, N);

    printf("Hasil Count Sort: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}

