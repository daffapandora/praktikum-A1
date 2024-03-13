#include <iostream>

int main() {

    int N, y, i, x;

    int isPerfect(int y){
        x = 1; 
        for (i = 2; i * i <= y; i++) {
            if (y % i == 0) {
                x += i;
                if (i * i != y) {
                    x += y / i;
                }
            }
        }

       
        return (x == y && y != 1);
    }

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    printf("Bilangan sempurna hingga %d adalah:\n", N);
    for (y = 2; y <= N; y++) {
        if (isPerfect(y)) {
            printf("%d ", y);
        }
    }

    return 0;
}
