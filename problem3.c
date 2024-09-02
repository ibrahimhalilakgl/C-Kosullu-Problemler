#include <stdio.h>

int main(){

    int sayi1, sayi2, sayi3, kucuksayi; // Üç sayı ve en küçük sayıyı tutmak için değişkenler tanımlıyoruz

    printf("Lutfen Ilk Sayiyi Giriniz: "); // Kullanıcıdan ilk sayıyı girmesini istiyoruz
    scanf("%d", &sayi1); // Girilen sayı 'sayi1' değişkenine atıyoruz

    printf("Lutfen Ikinci Sayiyi Giriniz: "); // Kullanıcıdan ikinci sayıyı girmesini istiyoruz
    scanf("%d", &sayi2); // Girilen sayı 'sayi2' değişkenine atıyoruz

    printf("Lutfen Ucuncu Sayiyi Giriniz: "); // Kullanıcıdan üçüncü sayıyı girmesini istiyoruz
    scanf("%d", &sayi3); // Girilen sayı 'sayi3' değişkenine atıyoruz

    kucuksayi = sayi1; // En küçük sayıyı 'sayi1' olarak başlatıyoruz

    if(sayi2 < kucuksayi) // 'sayi2'nin 'kucuksayi'dan küçük olup olmadığını kontrol ediyoruz
    {
        kucuksayi = sayi2; // Eğer 'sayi2' küçükse, 'kucuksayi' değişkenini güncelliyoruz
    }
    if(sayi3 < kucuksayi) // 'sayi3'ün 'kucuksayi'dan küçük olup olmadığını kontrol ediyoruz
    {
        kucuksayi = sayi3; // Eğer 'sayi3' küçükse, 'kucuksayi' değişkenini güncelliyoruz
    }

    printf("Girilen En Kucuk Sayi: %d", kucuksayi); // En küçük sayıyı yazdırıyoruz

    return 0; // Programın başarıyla sonlandırıyoruz
}
