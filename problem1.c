#include <stdio.h>

int main(){

    int sayi; // Kullanıcının gireceği sayıyı tutmak için bir değişken tanımlanıyoruz

    printf("Lutfen Bir Sayi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
    scanf("%d",&sayi); // Girilen sayı 'sayi' değişkenine atıyoruz

    if(sayi<0) // Girilen sayının negatif olup olmadığını kontrol ediyoruz
    {
        printf("Girilen Sayi Negatiftir."); // Eğer sayı negatifse, negatif olduğunu belirten bir mesaj yazdırıyoruz
    }
    else if(sayi==0) // Sayının sıfır olup olmadığını kontrol ediyoruz
    {
        printf("Girilen Sayi Sifirdir."); // Eğer sayı sıfırsa, sıfır olduğunu belirten bir mesaj yazdırıyoruz
    }
    else // Sayının pozitif olduğunu belirten son kontrol
    {
        printf("Girilen Sayi Pozitiftir."); // Eğer sayı pozitifse, pozitif olduğunu belirten bir mesaj yazdırıyoruz
    }

    return 0; // Programı başarıyla sonlandırıyoruz
}
