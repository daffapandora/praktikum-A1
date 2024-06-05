
#include<stdio.h>
#include<stdlib.h>

int main(){
 
    int N,i,j,freq,sum;


    printf("Masukkan nilai N = ");
    scanf("%d",&N);
    printf("Masukan elemen tabel : \n");
    int T[N];
    for(i=0;i<N;i++){
        scanf("%d",&T[i]); 
    }
    sum = 0; 
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(T[i]==T[j]){
                freq++;
            }
        }
        if(freq>1){
            sum = sum + T[i];
        }
    }
    printf("%d",sum);
    return 0;
}
