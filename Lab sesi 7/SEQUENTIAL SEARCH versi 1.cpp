#include <stdio.h>

int main() {
    int N = 20;
    int X;
    int T[N];
    int IX = 0;

    printf("Masukkan nilai pertama yang dicari: ");
    scanf("%d", &X);

    T[0] = 19; T[1] = 1; T[2] = 28; T[3] = 5; T[4] = 20; T[5] = 15; T[6] = 52; T[7] = 13; T[8] = 16; T[9] = 29;
    T[10] = 71; T[11] = 65; T[12] = 10; T[13] = 18; T[14] = 87; T[15] = 5; T[16] = 90; T[17] = 35; T[18] = 7; T[19] = 11;

    int i = 0;
    while (i < N && IX == 0) {
        if (T[i] == X) {
            IX = i + 1; 
        }
        i++;
    }

    if (IX == 0) {
        printf("X tidak ditemukan dalam array.\n");
    } else {
        printf("X ditemukan pada posisi: %d\n", IX);
    }

    return 0;
}

