#include <stdio.h>

int SEQSearchWithSentinel(int T[], int N, int X, int *IX) {
    int i = 1;
    T[N+1] = X;

    while (T[i] != X) {
        i++;
    }
    if (i <= N) {
        *IX = i - 1;
    } else {
        *IX = -1;
    }
    return *IX;
}

int main() {
    int N, X, IX;

    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &N);
    
    int T[N + 2];

    printf("Masukkan elemen-elemen array:\n");
    for (int i = 1; i <= N; i++) {
        printf("Elemen %d: ", i);
        scanf("%d", &T[i]);
    }

    printf("Masukkan elemen yang ingin dicari: ");
    scanf("%d", &X);
    
    SEQSearchWithSentinel(T, N, X, &IX);

    if (IX != -1) {
        printf("Elemen ditemukan pada indeks %d\n", IX);
    } else {
        printf("Elemen tidak ditemukan\n");
    }

    return 0;
}

