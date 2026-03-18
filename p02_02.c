#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int stok[100];
    char kategori[100][50];
    char cari[50];
    int total = 0;

    // Input jumlah data
    printf("Masukkan jumlah barang: ");
    scanf("%d", &n);

    // Input data barang
    for(int i = 0; i < n; i++) {
        printf("\nBarang ke-%d\n", i + 1);

        printf("Stok: ");
        scanf("%d", &stok[i]);

        printf("Kategori: ");
        scanf("%s", kategori[i]);
    }

    // Input kategori yang dicari
    printf("\nMasukkan kategori yang ingin dihitung: ");
    scanf("%s", cari);

    // Proses pencarian dan penjumlahan
    for(int i = 0; i < n; i++) {
        if(strcmp(kategori[i], cari) == 0) {
            total += stok[i];
        }
    }

    // Output
    printf("\nKategori yang dicari: %s", cari);
    printf("\nTotal stok: %d\n", total);

    return 0;
}