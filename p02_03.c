#include <stdio.h>
#include <string.h>

int main() {
    char nama[100];
    char pesanan[100];
    int jumlah;
    int harga = 0;
    int total_harga;
    float diskon = 0;
    float total_bayar;

    printf("Masukkan nama pemesan: ");
    scanf(" %[^\n]", nama);

    printf("Masukkan pesanan: ");
    scanf(" %[^\n]", pesanan);

    printf("Masukkan jumlah pesanan: ");
    scanf("%d", &jumlah);

    if (strcmp(pesanan, "bakwan") == 0 || strcmp(pesanan, "tahu isi") == 0 || strcmp(pesanan, "tempe") == 0) {
        harga = 10000;
    }
    else if (strcmp(pesanan, "roti isi ayam") == 0 || strcmp(pesanan, "kentang") == 0 || strcmp(pesanan, "sosis") == 0 || strcmp(pesanan, "nugget") == 0) {
        harga = 15000;
    }
    else if (strcmp(pesanan, "kopi hitam") == 0 || strcmp(pesanan, "cappucino") == 0 || strcmp(pesanan, "matcha") == 0 || strcmp(pesanan, "teh manis dingin") == 0) {
        harga = 8000;
    }

    total_harga = harga * jumlah;

    if (total_harga >= 100000) {
        int kelipatan = total_harga / 100000;
        diskon = total_harga * (0.10 * kelipatan);
    }
    else if (total_harga >= 50000) {
        int kelipatan = total_harga / 50000;
        diskon = total_harga * (0.05 * kelipatan);
    }

    total_bayar = total_harga - diskon;

    printf("\nNama Pemesan : %s\n", nama);
    printf("Pesanan : %s\n", pesanan);
    printf("Jumlah Pesanan : %d\n", jumlah);
    printf("Total Harga : %.0f\n", (float)total_harga);
    printf("Diskon : %.0f\n", diskon);
    printf("Total Bayar : %.0f\n", total_bayar);

    return 0;
}