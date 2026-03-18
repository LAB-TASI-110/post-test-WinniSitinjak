#include <stdio.h>
#include <string.h>

int main() {
    char nama[50];
    int n, i;
    int kode;
    int total = 0, harga;
    int voucher;
    int potonganVoucher = 0;
    float diskonPersen = 0;
    int diskon = 0;
    int totalBayar;

    printf("=== SISTEM KAFETARIA IT DEL ===\n");

    // Input nama
    printf("Nama Pemesan: ");
    scanf("%s", nama);

    // Input jumlah pesanan
    printf("Jumlah Pesanan: ");
    scanf("%d", &n);

    // Loop input pesanan
    for(i = 1; i <= n; i++) {
        printf("\nPesanan ke-%d\n", i);
        printf("1. Bakwan\n2. Tempe\n3. Tahu\n");
        printf("4. Roti Isi Ayam\n5. Nugget\n6. Sosis\n");
        printf("7. Kopi Hitam\n8. Cappucino\n9. Matcha\n10. Es Teh\n");
        printf("Pilih menu (1-10): ");
        scanf("%d", &kode);

        // Tentukan harga
        if(kode >= 1 && kode <= 3) {
            harga = 10000;
        } else if(kode >= 4 && kode <= 6) {
            harga = 15000;
        } else if(kode >= 7 && kode <= 10) {
            harga = 8000;
        } else {
            printf("Kode tidak valid!\n");
            harga = 0;
        }

        total += harga;
    }

    // Hitung diskon
    if(total > 50000) {
        int kelipatan = total / 50000;
        diskonPersen = kelipatan * 5; // persen
        diskon = total * diskonPersen / 100;
    }

    // Input voucher
    printf("\nJumlah Voucher: ");
    scanf("%d", &voucher);

    potonganVoucher = voucher * 5000;

    // Hitung total bayar
    totalBayar = total - diskon - potonganVoucher;

    if(totalBayar < 0) {
        totalBayar = 0;
    }

    // Output struk
    printf("\n=== STRUK PEMBAYARAN ===\n");
    printf("Nama Pemesan : %s\n", nama);
    printf("Total Harga  : %d\n", total);

    if(diskon > 0) {
        printf("Diskon       : %d (%.0f%%)\n", diskon, diskonPersen);
    } else {
        printf("Diskon       : Tidak ada\n");
    }

    if(voucher > 0) {
        printf("Voucher      : %d (Potongan %d)\n", voucher, potonganVoucher);
    } else {
        printf("Voucher      : Tidak ada\n");
    }

    printf("Total Bayar  : %d\n", totalBayar);

    printf("\nTerima kasih!\n");

    return 0;
}