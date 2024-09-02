#include <stdio.h>

int main(){

    float sayi1, sayi2; // İki sayı için değişkenler tanımlanıyor
    char islem; // Yapılacak işlemi tutmak için bir karakter değişkeni tanımlanıyor

    printf("Lutfen Ilk Sayiyi Giriniz: "); // Kullanıcıdan ilk sayıyı girmesini istiyoruz
    scanf("%f", &sayi1); // Girilen sayıyı 'sayi1' değişkenine atıyoruz

    printf("Lutfen Ikinci Sayiyi Giriniz: "); // Kullanıcıdan ikinci sayıyı girmesini istiyoruz
    scanf("%f", &sayi2); // Girilen sayıyı 'sayi2' değişkenine atıyoruz

    printf("Lutfen Yapacaginiz Islemi Giriniz(+.-.*./): "); // Kullanıcıdan yapılacak işlemi girmesini istiyoruz
    scanf(" %c", &islem); // Girilen işlemi 'islem' değişkenine atıyoruz

    if(islem == '+') // Eğer işlem '+' ise, toplama işlemi yapılır
    {
        printf("Girilen Sayilarin Toplami: %.2f", sayi1 + sayi2); // Sonucu yazdırıyoruz
    }
    else if(islem == '-') // Eğer işlem '-' ise, çıkarma işlemi yapılır
    {
        printf("Girilen Sayilarin Farki: %.2f", sayi1 - sayi2); // Sonucu yazdırıyoruz
    }
    else if(islem == '*') // Eğer işlem '*' ise, çarpma işlemi yapılır
    {
        printf("Girilen Sayilarin Carpimi: %.2f", sayi1 * sayi2); // Sonucu yazdırıyoruz
    }
    else if(islem == '/') // Eğer işlem '/' ise, bölme işlemi yapılır
    {
        printf("Girilen Sayilarin Bolumu: %.2f", sayi1 / sayi2); // Sonucu yazdırıyoruz
    }
    else // Eğer girilen işlem geçersizse
    {
        printf("Girilen Islem Tanimlanamadi."); // Hata mesajı yazdırıyoruz
    }

    return 0; // Programı başarıyla sonlandırıyoruz
}
