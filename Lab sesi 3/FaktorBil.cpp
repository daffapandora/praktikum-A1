#include <stdio.h>

int main(){
	
    int N, i;

    printf("Masukan N : ");
    scanf("%d", &N);

    printf("Fektor %d adalah : ", N);

    for(i = 1; i <= N; i++){
        if(N % i == 0){
            printf("%d ", i);
        }
    }

    return 0;
}
