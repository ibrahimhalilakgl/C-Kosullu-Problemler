#include <stdio.h>

int main(){

    float sayi1, sayi2, sayi3, sayi4, ortalama; // Dört sayıyı ve bu sayıların ortalamasını tutmak için değişkenler tanımlanıyor

    printf("Lutfen Ilk Sayiyi Giriniz: "); // Kullanıcıdan ilk sayıyı girmesini istiyoruz
    scanf("%f", &sayi1); // Girilen sayıyı 'sayi1' değişkenine atıyoruz

    printf("Lutfen Ikinci Sayiyi Giriniz: "); // Kullanıcıdan ikinci sayıyı girmesini istiyoruz
    scanf("%f", &sayi2); // Girilen sayıyı 'sayi2' değişkenine atıyoruz

    printf("Lutfen Ucuncu Sayiyi Giriniz: "); // Kullanıcıdan üçüncü sayıyı girmesini istiyoruz
    scanf("%f", &sayi3); // Girilen sayıyı 'sayi3' değişkenine atıyoruz

    printf("Lutfen Dorduncu Sayiyi Giriniz: "); // Kullanıcıdan dördüncü sayıyı girmesini istiyoruz
    scanf("%f", &sayi4); // Girilen sayıyı 'sayi4' değişkenine atıyoruz

    // Dört sayının ortalaması hesaplanıyor
    ortalama = (sayi1 + sayi2 + sayi3 + sayi4) / 4;

    printf("Ortalamadan Kucuk Sayilar: "); // Ortalamadan küçük olan sayıları yazdıracağız

    if(sayi1 < ortalama) // Eğer 'sayi1' ortalamadan küçükse, yazdırılıyor
    {
        printf("%.2f ", sayi1);
    }
    
    if(sayi2 < ortalama) // Eğer 'sayi2' ortalamadan küçükse, yazdırılıyor
    {
        printf("%.2f ", sayi2);
    }
    if(sayi3 < ortalama) // Eğer 'sayi3' ortalamadan küçükse, yazdırılıyor
    {
        printf("%.2f ", sayi3);
    }
    if(sayi4 < ortalama) // Eğer 'sayi4' ortalamadan küçükse, yazdırılıyor
    {
        printf("%.2f ", sayi4);
    }

    printf("\nOrtalamadan Buyuk Sayilar: "); // Ortalamadan büyük olan sayıları yazdıracağız

    if(sayi1 > ortalama) // Eğer 'sayi1' ortalamadan büyükse, yazdırılıyor
    {
        printf("%.2f ", sayi1);
    }
    if(sayi2 > ortalama) // Eğer 'sayi2' ortalamadan büyükse, yazdırılıyor
    {
        printf("%.2f ", sayi2);
    }
    if(sayi3 > ortalama) // Eğer 'sayi3' ortalamadan büyükse, yazdırılıyor
    {
        printf("%.2f ", sayi3);
    }
    if(sayi4 > ortalama) // Eğer 'sayi4' ortalamadan büyükse, yazdırılıyor
    {
        printf("%.2f ", sayi4);
    }

    return 0; // Programı başarıyla sonlandırıyoruz
}
