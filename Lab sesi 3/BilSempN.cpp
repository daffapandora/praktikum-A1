#include <stdio.h>

int BilSempN(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

void x(int N) {
    printf("Bilangan sempurna hingga %d: ", N);
    for (int i = 2; i <= N; i++) {
        if (BilSempN(i)) {
            printf("%d, ", i);
        }
    }
}

int main() {
    int N;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    x(N);
    return 0;
}
