#include <stdio.h>

int BilsempN(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int N;

    printf("Masukkan nilai N : ");
    scanf("%d", &N);

    printf("Bilangan sempurna hingga %d : ", N);
    for (int i = 2; i <= N; i++) {
        if (BilsempN(i)) {
            printf("%d, ", i);
        }
    }

    return 0;
}

