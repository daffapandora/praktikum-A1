#include <stdio.h>

void bubbleSort(int arr[], int n) {
  // Kamus lokal
  int i, k, pass, temp;

  // Pengurutan dengan Bubble Sort
  for (pass = 1; pass < n; pass++) {
    for (k = n - 1; k >= pass; k--) {
      // Perbandingan elemen
      if (arr[k] < arr[k - 1]) {
        // Penukaran elemen
        temp = arr[k];
        arr[k] = arr[k - 1];
        arr[k - 1] = temp;
      }
    }
  }
}

int main() {
  // Membaca input
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Mengurutkan array menggunakan Bubble Sort
  bubbleSort(arr, n);

  // Menampilkan array yang telah diurutkan
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

