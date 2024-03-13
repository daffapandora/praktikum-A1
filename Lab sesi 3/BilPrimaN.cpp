#include <stdio.h>

int main() {
    int N, i, j, x;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    printf("Bilangan Primanya adalah: ");
    for (i = 2; i <= N; i++){
        x = 1;
        for (j = 2; j < i; j++){
            if (i % j == 0) {
                x = 0; 
                break; 
            }
        }
        if (x){
            printf("%d, ", i);
        }
    }
    return 0;
}

