#include <stdio.h>
#include <string.h>

int main() {
    char kota[10];
    int beratButet, beratUcok, totalBerat;
    int tarif = 0;
    int totalOngkir;
    int diskon = 0;
    int i;

    for (i = 0; ; i++) {

        scanf("%s", kota);

        if (strcmp(kota, "END") == 0) {
            break;
        }

        scanf("%d", &beratButet);

        if (beratButet < 0) {
            printf("Input tidak valid\n");
            continue;
        }

        beratUcok = beratButet + 2;
        totalBerat = beratButet + beratUcok;

        if (strcmp(kota, "MDN") == 0) {
            tarif = 12000;
        } 
        else if (strcmp(kota, "JKT") == 0) {
            tarif = 15000;
        } 
        else if (strcmp(kota, "BLG") == 0) {
            tarif = 10000;
        } 
        else if (strcmp(kota, "SBY") == 0) {
            tarif = 14000;
        } 
        else {
            printf("Kode kota tidak valid\n");
            continue;
        }

        totalOngkir = totalBerat * tarif;

        if (totalBerat >= 12) {
            diskon = 20;
            totalOngkir = totalOngkir - (totalOngkir * 20 / 100);
        } 
        else if (totalBerat >= 8) {
            diskon = 10;
            totalOngkir = totalOngkir - (totalOngkir * 10 / 100);
        } 
        else {
            diskon = 0;
        }

        printf("=== STRUK DEL-EXPRESS ===\n");
        printf("Kota Tujuan : %s\n", kota);
        printf("Berat Paket Butet : %d kg\n", beratButet);
        printf("Berat Paket Ucok : %d kg\n", beratUcok);
        printf("Total Berat : %d kg\n", totalBerat);
        printf("Total Ongkir : Rp %d\n", totalOngkir);

        if (diskon == 20) {
            printf("Promo : Diskon 20%%\n");
        } 
        else if (diskon == 10) {
            printf("Promo : Diskon 10%%\n");
        } 
        else {
            printf("Promo : Tidak ada\n");
        }
    }

    return 0;
}