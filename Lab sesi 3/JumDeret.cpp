#include <stdio.h>

int main(){
    int N, sum = 0;

    printf("Masukan N : ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        sum += i;
    }

    printf("jumlah total deret bilangan : %d", sum);

    return 0;
}
