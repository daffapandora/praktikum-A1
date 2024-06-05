#include<stdio.h>
#include<stdlib.h>

int main(){
 
    int i,j,m,n;


    printf("Masukan jumlah baris matriks : \n");
    scanf("%d",&m);
    printf("Masukan jumlah kolom matriks : \n");
    scanf("%d",&n);

    int T[m][n];
    int sumRow[m], sumCol[n];



    printf("Masukkan elemen-elemen matriks : \n");
    for(i=0;i<m;i++){
        sumRow[i] = 0;
        for(j=0;j<n;j++){
            printf("T[%d][%d] = ",i+1,j+1);
            scanf("%d",&T[i][j]);
        }
    }

    for(i=0;i<m;i++){
        sumRow[i] = 0;
        for(j=0;j<n;j++){
            sumRow[i] = sumRow[i] + T[i][j];
        }
        printf("Baris ke-%d = %d\n",i+1,sumRow[i]);
    }
    for(j=0;j<n;j++){
        sumCol[j] = 0;
        for(i=0;i<m;i++){
            sumCol[j] = sumCol[j] + T[i][j];
        }
        printf("Kolom ke-%d = %d\n",j+1,sumCol[j]);
    }
    return 0;
}
