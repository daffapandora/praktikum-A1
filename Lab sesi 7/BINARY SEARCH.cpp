#include <stdio.h>
#include <stdbool.h>

void BinSearch(int T[], int N, int X, bool *Found, int *IX) {
    int atas, bawah, tengah;
    atas = N;
    bawah = 1;
    *Found = false;
    *IX = 0;

    while (bawah <= atas && !(*Found)) {
        tengah = (atas + bawah) / 2;
        if (T[tengah] < X) {
            bawah = tengah + 1;
        } else if (T[tengah] > X) {
            atas = tengah - 1;
        } else {
            *Found = true;
            *IX = tengah;
        }
    }
}

int main() {
    int T[] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47}; // Contoh array
    int N = sizeof(T) / sizeof(T[0]);
    int X = 5; // Nilai yang dicari
    bool Found;
    int IX;

    BinSearch(T, N, X, &Found, &IX);

    if (Found) {
        printf("Elemen ditemukan pada indeks: %d\n", IX);
    } else {
        printf("Elemen tidak ditemukan.\n");
    }

    return 0;
}

