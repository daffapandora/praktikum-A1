#include <stdio.h>

int main() {
    int k, n, i, x = 0;

    printf("Masukkan k: ");
    scanf("%d", &k);
    printf("Masukkan n: ");
    scanf("%d", &n);

    for (i = 1; x < n; i++) {
        if (i % k != 0) {
            printf("%d ", i);
            x++;
        }
    }

    return 0;
}

