#include <stdio.h>

int main() {
    int n, i, j, k = 0;

    printf("Masukkan n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", k);
            k = (k + 1) % 10;
        }
        printf("\n");
    }

    return 0;
}

