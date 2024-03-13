#include <stdio.h>

int main() {
    int i1, i2, j;
    double i;

    printf("Masukkan nilai 1: ");
    scanf("%d", &i1);

    printf("Masukkan nilai 2: ");
    scanf("%d", &i2);

    printf("Masukkan pilihan menu: ");
    scanf(" %c", &j);

    if (j == 'a' || j == 'b' || j == 'c' || j == 'd' || j == 'e' || j == 'f') {
        switch (j) {
            case 'a':
                i = i1 + i2;
                printf("Hasil perhitungan: %.2lf\n", i);
                break;
            case 'b':
                i = i1 - i2;
                printf("Hasil perhitungan: %.2lf\n", i);
                break;
            case 'c':
                i = i1 * i2;
                printf("Hasil perhitungan: %.2lf\n", i);
                break;
            case 'd':
                i = i1 / i2;
                printf("Hasil perhitungan: %.2lf\n", i);
                break;
            case 'e':
                i = i1 / (double)i2;
                printf("Hasil perhitungan: %.2lf\n", i);
                break;
            case 'f':
                i = i1 % i2;
                printf("Hasil perhitungan: %.2lf\n", i);
                break;
            default:
                printf("Bukan pilihan menu yang benar\n");
                break;
        }
    } 
	else {
        printf("Bukan pilihan menu yang benar\n");
    }

    return 0;
}
