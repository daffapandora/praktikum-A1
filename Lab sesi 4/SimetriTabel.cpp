#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,j,N1,N2,eqcount;


    printf("Masukan nilai N1 = ");
    scanf("%d",&N1);
    printf("Masukan elemen tabel 1  : \n");
    int T1[N1];
    for(i=0;i<N1;i++){
        scanf("%d",&T1[i]);
    }

    printf("Masukan nilai N2 = ");
    scanf("%d",&N2);
    printf("Masukan elemen tabel 2  : \n");
    int T2[N2];
    for(i=0;i<N2;i++){
        scanf("%d",&T2[i]);
        }

    if(N1==N2){
        eqcount = 0;
        for(i=0;i<N1;i++){
            for(j=0;j<N2;j++){
                if(T1[i]==T2[j]){
                    eqcount = eqcount + 1;
                }
            }
        }
        if(eqcount==N1){
            printf("T1 dan T2 simetri");
        }
        else{
            printf("T1 dan T2 tidak simetri");
        }
    }
    else{
        printf("T1 dan T2 tidak simetri");
    }
    return 0;
    }

