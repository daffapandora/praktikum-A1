#include <stdio.h>

int main(){
    int N, i, x = 0;

    printf("Masukan N : ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        if(N % i == 0){
            x++;
        }
    }

    if(x == 2){
        printf("%d adalah bilangan prima", N);
    }
    else{
        printf("%d bukan bilangan prima", N);
    }

    return 0;
}
