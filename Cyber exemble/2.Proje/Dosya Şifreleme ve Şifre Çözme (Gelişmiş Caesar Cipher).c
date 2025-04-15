#include <stdio.h>
#include <stdlib.h>

int main() {

    char dsAd[100],karakter,yeni_karakter;
    int miktar,no;

    printf("Lutfen dosya adini giriniz: ");
    scanf("%s",dsAd);

    FILE *a = fopen(dsAd, "r");
    if (a == NULL) {
        printf("Giris dosyasi acilamadi\n");
        return 1;
    }

    printf("Sifreleme miktarini giriniz: ");
    scanf("%d",&miktar);

    printf("1) Sifrele\n2) Sifreyi coz\nSeciminizi yapin: ");
    scanf("%d",&no);

    FILE *sonuc;
    if (no == 1) {
        sonuc = fopen("sifreli.txt", "w");
    } else {
        sonuc = fopen("cozuldu.txt", "w");
    }

    if (sonuc == NULL) {
        printf("cikti dosyasi acilamadi\n");
        fclose(a);
        return 1;,
    }

    while ((karakter = fgetc(a)) != EOF) {
        if (karakter >= 'A' && karakter <= 'Z') {
            if (no == 1) {
                yeni_karakter = (karakter - 'A' + miktar) % 26 + 'A';
            } else {
                yeni_karakter = (karakter - 'A' - miktar + 26) % 26 + 'A';
            }
        } 
        else if (karakter >= 'a' && karakter <= 'z') {
            if (no == 1) {
                yeni_karakter = (karakter - 'a' + miktar) % 26 + 'a';
            } else {
                yeni_karakter = (karakter - 'a' - miktar + 26) % 26 + 'a';
            }
        } 
        else {
            yeni_karakter = karakter;
        }
n
        fputc(yeni_karakter,sonuc);
        printf("%c",yeni_karakter);
    }

    fclose(a);
    fclose(sonuc);

    printf("\nislem tamamlandi.");
    return 0;
}

