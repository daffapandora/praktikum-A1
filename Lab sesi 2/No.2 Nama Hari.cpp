#include <stdio.h>

int main() {
    int nomor_hari;
    
    printf("Masukkan nomor hari (1-7): ");
    scanf("%d", &nomor_hari);
    
    if (nomor_hari >= 1 && nomor_hari <= 7) {
        switch(nomor_hari) {
            case 1:
                printf("Senin\n", nomor_hari);
                break;
            case 2:
                printf("Selasa\n", nomor_hari);
                break;
            case 3:
                printf("Rabu\n", nomor_hari);
                break;
            case 4:
                printf("Kamis\n", nomor_hari);
                break;
            case 5:
                printf("Jumat\n", nomor_hari);
                break;
            case 6:
                printf("Sabtu\n", nomor_hari);
                break;
            case 7:
                printf("Minggu\n", nomor_hari);
                break;
        }
    }
	else {
        printf("Masukan nomor hari tidak tepat\n");
    }
    
    return 0;
}
