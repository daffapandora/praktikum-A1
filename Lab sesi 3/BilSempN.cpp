#include <stdio.h>

int isPerfect(int num) {
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
        if (isPerfect(i)) {
            printf("%d, ", i);
        }
    }

    return 0;
}

