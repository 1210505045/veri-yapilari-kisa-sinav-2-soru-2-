#include <stdio.h>

int binarySearch(int dizi[], int dusuk, int yuksek, int aranan) {
    while (dusuk <= yuksek) {
        int orta = dusuk + (yuksek - dusuk) / 2;

        if (dizi[orta] == aranan)
            return orta;

        if (dizi[orta] < aranan)
            dusuk = orta + 1;
        else
            yuksek = orta - 1;
    }

    return -1;
}


int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int aranan;
    
	printf("Dizi aramak istediginiz elemani girin: ");
    scanf("%d", &aranan);

    int sonuc = binarySearch(dizi, 0, n - 1, aranan);

    if (sonuc == -1)
        printf("Eleman bulunamadi.\n");
    else
        printf("Eleman %d. indiste bulundu.\n", sonuc);

    return 0;
}

