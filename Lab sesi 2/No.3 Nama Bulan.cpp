#include <stdio.h>

int main() {
    int nomor_bulan;
    
    printf("Masukkan nomor bulan (1-12): ");
    scanf("%d", &nomor_bulan);
    
    if (nomor_bulan >= 1 && nomor_bulan <= 12) {
        switch(nomor_bulan) {
            case 1:
                printf("Januari\n", nomor_bulan);
                break;
            case 2:
                printf("Februari\n", nomor_bulan);
                break;
            case 3:
                printf("Maret\n", nomor_bulan);
                break;
            case 4:
                printf("April\n", nomor_bulan);
                break;
            case 5:
                printf("Mei\n", nomor_bulan);
                break;
            case 6:
                printf("Juni\n", nomor_bulan);
                break;
            case 7:
                printf("Juli\n", nomor_bulan);
                break;
            case 8:
                printf("Agustus\n", nomor_bulan);
                break;
            case 9:
                printf("September\n", nomor_bulan);
                break;
            case 10:
                printf("Oktober\n", nomor_bulan);
                break;
            case 11:
                printf("November\n", nomor_bulan);
                break;
            case 12:
                printf("Desember\n", nomor_bulan);
                break;
        }
    }
	else {
        printf("Masukan nomor bulan tidak tepat\n");
    }
    
    return 0;
}
