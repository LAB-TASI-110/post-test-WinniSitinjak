#include <stdio.h>
#include <ctype.h>

int main() {
    int N;
    int stok[1000];
    char kategori;
    int total = 0;
    int i;

    // input jumlah data
    do {
        printf("Masukkan jumlah data stok: ");
        scanf("%d", &N);
    } while (N <= 0);

    // input stok barang
    for(i = 0; i < N; i++) {
        do {
            printf("Masukkan stok ke-%d: ", i + 1);
            scanf("%d", &stok[i]);
        } while (stok[i] < 0);
    }

    // input kategori
    do {
        printf("Masukkan kategori (A/B/C): ");
        scanf(" %c", &kategori);
        kategori = toupper(kategori);
    } while (kategori != 'A' && kategori != 'B' && kategori != 'C');

    // menghitung total berdasarkan pola rak
    for(i = 0; i < N; i++) {
        int posisi = i + 1;

        if(kategori == 'A' && posisi % 3 == 1) {
            total += stok[i];
        }
        else if(kategori == 'B' && posisi % 3 == 2) {
            total += stok[i];
        }
        else if(kategori == 'C' && posisi % 3 == 0) {
            total += stok[i];
        }
    }

    printf("Total stok untuk kategori %c adalah %d\n", kategori, total);

    return 0;
}