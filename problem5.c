#include <stdio.h>

int main(){

    int vize, final; // Vize ve final notlarını tutmak için iki değişken tanımlanıyor
    float ortalama; // Ortalamayı tutmak için bir değişken tanımlanıyor

    printf("Lutfen Vize Notunuzu Giriniz: "); // Kullanıcıdan vize notunu girmesini istiyoruz
    scanf("%d", &vize); // Girilen notu 'vize' değişkenine atıyoruz

    printf("Lutfen Final Notunuzu Giriniz: "); // Kullanıcıdan final notunu girmesini istiyoruz
    scanf("%d", &final); // Girilen notu 'final' değişkenine atıyoruz

    // Vize notunun %40'ı ve final notunun %60'ı alınarak ortalama hesaplanıyor
    ortalama = ((vize * 40) + (final * 60)) / 100;

    if(ortalama < 55) // Eğer ortalama 55'ten küçükse, dersten kalındığını belirtiyoruz
    {
        printf("Dersten Kaldınız Ortalamanız: %.2f", ortalama); // Ortalama ile birlikte mesaj yazdırıyoruz
    }
    else // Eğer ortalama 55 veya daha büyükse, dersi başarıyla geçildiğini belirtiyoruz
    {
        printf("Dersi Başariyla Tamaladiniz Ortalamaniz: %.2f", ortalama); // Ortalama ile birlikte mesaj yazdırıyoruz
    }

    return 0; // Programı başarıyla sonlandırıyoruz
}
