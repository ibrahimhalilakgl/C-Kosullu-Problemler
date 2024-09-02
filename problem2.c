#include <stdio.h>

int main(){

    int sayi; // Kullanıcının gireceği sayıyı tutmak için bir değişken tanımlanıyor

    printf("Lutfen Bir Sayi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
    scanf("%d",&sayi); // Girilen sayı 'sayi' değişkenine atıyoruz

    if(sayi<0) // Girilen sayının negatif olup olmadığını kontrol ediyoruz
    {
        sayi = sayi * (-1); // Eğer sayı negatifse, sayıyı pozitif hale getiriyoruz
    }

    printf("Girilen Sayinin Mutlak Degeri: %d", sayi); // Sayının mutlak değerini yazdırıyoruz

    return 0; // Programın başarıyla sonlandırıyoruz
}
