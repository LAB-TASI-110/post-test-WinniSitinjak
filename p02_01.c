#include <stdio.h>
#include <string.h>

int main() {
    char kota[3][4];
    int berat_butet[3];

    int i;
    for(i = 0; i < 3; i++) {
        printf("Input kode kota dan berat butet: ");
        scanf("%s %d", kota[i], &berat_butet[i]);
    }

    printf("\n=== STRUK DEL EXPRESS ===\n");

    for(i = 0; i < 3; i++) {
        int ongkir;
        int berat_ucok = berat_butet[i] + 2;
        int total_berat = berat_butet[i] + berat_ucok;
        int total_ongkos;
        float diskon = 0;

        // menentukan ongkir dan lokasi
        if(strcmp(kota[i], "mdn") == 0) {
            ongkir = 8000;
            printf("\nKota Tujuan: Medan (Sumatera)\n");
        } else if(strcmp(kota[i], "blg") == 0) {
            ongkir = 5000;
            printf("\nKota Tujuan: Balige (Sumatera)\n");
        } else if(strcmp(kota[i], "jkt") == 0) {
            ongkir = 12000;
            printf("\nKota Tujuan: Jakarta (Luar Sumatera - Garansi)\n");
        } else if(strcmp(kota[i], "sby") == 0) {
            ongkir = 13000;
            printf("\nKota Tujuan: Surabaya (Luar Sumatera - Garansi)\n");
        } else {
            printf("\nKota tidak valid!\n");
            continue;
        }

        total_ongkos = total_berat * ongkir;

        // diskon
        if(total_berat > 10) {
            diskon = 0.1 * total_ongkos;
        }

        // output struk
        printf("Berat Butet   : %d kg\n", berat_butet[i]);
        printf("Berat Ucok    : %d kg\n", berat_ucok);
        printf("Total Berat   : %d kg\n", total_berat);
        printf("Total Ongkos  : %d\n", total_ongkos);

        if(diskon > 0) {
            printf("Diskon 10%%    : %.0f\n", diskon);
            printf("Bayar         : %.0f\n", total_ongkos - diskon);
        } else {
            printf("Diskon        : Tidak ada\n");
            printf("Bayar         : %d\n", total_ongkos);
        }
    }

    return 0;
}