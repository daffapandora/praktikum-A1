#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

int main() {
    int Q;
    scanf("%d", &Q);
    getchar(); 
    int stock[MAX_BOOKS] = {0}; 
    
    for (int i = 0; i < Q; i++) {
        int q;
        char book[101];
        scanf("%d", &q);
        getchar(); 
        fgets(book, 101, stdin);
        book[strcspn(book, "\n")] = '\0'; 

        if (q == 1) {
            int count = 0;
            for (int j = 0; j < MAX_BOOKS; j++) {
                if (stock[j] > 0) {
                    count++;
                }
            }
            printf("%d\n", count);
        } else if (q == 2) {
            for (int j = 0; j < MAX_BOOKS; j++) {
                if (stock[j] == 0) {
                    strcpy(book, book);
                    stock[j]++;
                    printf("Terima Kasih\n");
                    break;
                }
            }
        } else if (q == 3) {
            int borrowed = 0;
            for (int j = 0; j < MAX_BOOKS; j++) {
                if (strcmp(book, book) == 0) {
                    if (stock[j] > 0) {
                        stock[j]--;
                        borrowed = 1;
                        printf("Buku Berhasil Dipinjam\n");
                        break;
                    }
                }
            }
            if (!borrowed) {
                printf("Maaf Stok Kosong\n");
            }
        }
    }

    return 0;
}

