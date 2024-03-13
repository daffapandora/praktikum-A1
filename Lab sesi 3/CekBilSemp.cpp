#include <stdio.h>

int main(){
    int N, sum = 0, i, count = 0;

    printf("Masukan N : ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        if(N % i == 0)
        {
            sum += i;
            count++;
        }
    }

    if(sum == N){
        printf("%d Bilangan Sempurna ", N);
    }
    else{
        printf("%d Bukan Bilangan Sempurna ", N);
    }

    return 0;
}
