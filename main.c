#include <stdio.h>

int main() {
    char metin[100];  // Metin için bir karakter dizisi
    char harf;        // Aranacak harf
    char *p;          // Pointer tanımı

    printf("Metni girin: ");
    fgets(metin, sizeof(metin), stdin);  // fgets fonksiyonu ile metni alır

    printf("Aranacak harfi girin: ");
    scanf(" %c", &harf);  // Aranacak harfi alır

    p = metin;  // Pointer'ı metin dizisinin başlangıcına atar

    int pozisyon = 0; // Harfin bulunduğu pozisyonu saklamak için bir değişken tanımlar

    // Pointer ile metin dizisini tarar
    while (*p != '\0') {
        pozisyon++; // Her adımda pozisyonu artırır
        if (*p == harf) { // Eğer pointer'ın işaret ettiği karakter aranan harfse
            printf("%c harfi, %d. pozisyonda bulundu.\n", harf, pozisyon); // Harfin bulunduğu pozisyonu yazdırır
            break;  // Harf bulunduğunda döngüden çıkar
        }
        p++; // Pointer'ı bir sonraki karakterin adresine taşır
    }

    if (*p == '\0') { // Harf metin içinde bulunamadıysa
        printf("%c harfi metin içinde bulunamadı.\n", harf);
    }

    return 0;
}
