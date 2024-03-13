#include <stdio.h>

int main(){
    int N, sum = 0, i;

    printf("Masukan N : ");
    scanf("%d", &N);

    for(i = 1; i <= N/2; i++)
    {
        if(N % i == 0)
        {
            sum += i;
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
