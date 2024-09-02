#include <stdio.h>

int main(){

    int sayi; // Kullanıcının gireceği sayıyı tutmak için bir değişken tanımlanıyoruz

    printf("Lutfen Bir Sayi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
    scanf("%d", &sayi); // Girilen sayı 'sayi' değişkenine atıyoruz

    if(sayi % 6 == 0) // Sayının 6'nın katı olup olmadığını kontrol ediyoruz
    {
        printf("Girilen Sayi 6 Sayisinin Katidir."); // Eğer sayı 6'nın katıysa, bunu belirten bir mesaj yazdırıyoruz
    }
    else
    {
        printf("Girilen Sayi 6 Sayisinin Kati Degildir."); // Eğer sayı 6'nın katı değilse, bunu belirten bir mesaj yazdırıyoruz
    }

    return 0; // Programı başarıyla sonlandırıyoruz
}
