#include <stdio.h>

int main(){

    int CocukSayisi; // Personelin çocuk sayısını tutmak için bir değişken tanımlanıyor
    float maas; // Personelin maaş miktarını tutmak için bir değişken tanımlanıyor

    printf("Lutfen Personelin Maas Miktarini Yaziniz: "); // Kullanıcıdan personelin maaş miktarını girmesini istiyoruz
    scanf("%f", &maas); // Girilen maaşı 'maas' değişkenine atıyoruz

    printf("Lutfen Personelin Cocuk Sayisini Giriniz: "); // Kullanıcıdan personelin çocuk sayısını girmesini istiyoruz
    scanf("%d", &CocukSayisi); // Girilen çocuk sayısını 'CocukSayisi' değişkenine atıyoruz

    if(CocukSayisi < 0) // Çocuk sayısının negatif olup olmadığını kontrol ediyoruz
    {
        printf("Hatali Cocuk Sayisi!"); // Hatalı çocuk sayısı mesajı yazdırıyoruz
        return 1; // Hatalı giriş nedeniyle programı sonlandırıyoruz
    }

    if(CocukSayisi == 0) // Eğer çocuk sayısı 0 ise, maaşta değişiklik yapılmıyor
    {
        printf("Personelin Maas Miktari: %.2f", maas); // Mevcut maaşı yazdırıyoruz
    }
    else if(CocukSayisi == 1) // Eğer çocuk sayısı 1 ise, maaşa %5 ekleniyor
    {
        maas = (maas * 105) / 100; // Maaş %5 artırılıyor
        printf("Personelin Maas Miktari: %.2f", maas); // Yeni maaşı yazdırıyoruz
    }
    else if(CocukSayisi == 2) // Eğer çocuk sayısı 2 ise, maaşa %10 ekleniyor
    {
        maas = (maas * 110) / 100; // Maaş %10 artırılıyor
        printf("Personelin Maas Miktari: %.2f", maas); // Yeni maaşı yazdırıyoruz
    }
    else // Eğer çocuk sayısı 2'den fazla ise, maaşa %15 ekleniyor
    {
        maas = (maas * 115) / 100; // Maaş %15 artırılıyor
        printf("Personelin Maas Miktari: %.2f", maas); // Yeni maaşı yazdırıyoruz
    }

    return 0; // Programı başarıyla sonlandırıyoruz
}
