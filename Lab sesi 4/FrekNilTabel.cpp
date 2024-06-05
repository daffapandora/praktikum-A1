#include <stdio.h>
#include <stdlib.h>

void freq(int T[], int n) {
    int x, y, z;

    printf("Elemen tabel T yang muncul lebih dari satu kali: ");
    
    for (x = 0; x < n; x++) {
        z = 1;
        if (T[x] != -1) {
            for (y = x + 1; y < n; y++) {
                if (T[x] == T[y]) {
                    z++;
                    T[y] = -1;
                }
            }
            if (z > 1) {
                printf("%d ", T[x]);
            }
        }
    }
    printf("\n");
}

int main() {
    int T[] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4};
    int n = sizeof(T) / sizeof(T[0]);

    freq(T, n);

    return 0;
}

