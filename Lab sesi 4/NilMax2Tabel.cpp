#include<stdio.h>
#include<stdlib.h>

int main(){

    int N,i,max1,max2;

    printf("Masukkan nilai N : ");
    scanf("%d",&N);
    printf("Masukkan elemen tabel : \n");
    int T[N];
    for (i=0;i<N;i++){
        scanf("%d",&T[i]);

    }
    max1 = 0; 
    max2 = 0;
    for (i=0;i<N;i++){
        if (T[i]>max1){
            max2 = max1;
            max1 = T[i];
        }
        else {
            if (T[i]>max2 && T[i]!=max1){
                max2 = T[i];
            }
        }
    }
    printf("Nilai maksimum kedua adalah : %d\n",max2);
}
