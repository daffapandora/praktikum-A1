#include <stdio.h>

void insertionSort(int arr[], int n) {
	
  // Kamus lokal
  int i, pass, temp;

  // T1 adalah terurut
  for (pass = 2; pass <= n; pass++) {
    temp = arr[pass];
    i = pass - 1;

    // Pergeseran elemen
    while (temp < arr[i] && i > 0) {
      arr[i + 1] = arr[i];
      i--;
    }

    // Memasukkan elemen ke posisi yang tepat
    switch (temp >= arr[i]) {
      case 1:
        arr[i + 1] = temp;
        break;
      case 0:
        arr[i + 1] = arr[i];
        arr[i] = temp;
        break;
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

  // Mengurutkan array menggunakan Insertion Sort
  insertionSort(arr, n);

  // Menampilkan array yang telah diurutkan
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

