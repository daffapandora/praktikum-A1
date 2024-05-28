#include <stdio.h>

int BinSearch1(int T[], int N, int X, int *found, int *IX) {
    int atas = 1;
    int bawah = N;
    int tengah;
    *found = false;
    *IX = 0;

    while (atas < bawah && X != T[tengah]) {
        tengah = (atas + bawah) / 2;

        if (X < T[tengah]) {
            bawah = tengah - 1;
        } else {
            atas = tengah + 1;
        }
    }

    if (X == T[tengah]) {
        *found = true;
        *IX = tengah;
    }

    return tengah;
}

int main() {
    int T[] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    int N = sizeof(T) / sizeof(T[0]);
    int X = 41;
    int found;
    int index;

    index = BinSearch1(T, N, X, &found, &index);

    if (found) {
        printf("Element ketemu di %d: %d\n", index, T[index]);
    } else {
        printf("Element tidak ada \n");
    }

    return 0;
}

