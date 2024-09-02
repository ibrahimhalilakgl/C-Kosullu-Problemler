#include <stdio.h>

int main(){

    int A, B, C; // Üçgenin kenar uzunluklarını tutmak için değişkenler tanımlanıyor

    printf("Lutfen A Kenarinin Uzunlugunu Giriniz: "); // Kullanıcıdan A kenarının uzunluğunu girmesini istiyoruz
    scanf("%d", &A); // Girilen uzunluğu 'A' değişkenine atıyoruz

    printf("Lutfen B Kenarinin Uzunlugunu Giriniz: "); // Kullanıcıdan B kenarının uzunluğunu girmesini istiyoruz
    scanf("%d", &B); // Girilen uzunluğu 'B' değişkenine atıyoruz

    printf("Lutfen C Kenarinin Uzunlugunu Giriniz: "); // Kullanıcıdan C kenarının uzunluğunu girmesini istiyoruz
    scanf("%d", &C); // Girilen uzunluğu 'C' değişkenine atıyoruz

    A = A * A; // A kenarının karesi hesaplanıyor
    B = B * B; // B kenarının karesi hesaplanıyor
    C = C * C; // C kenarının karesi hesaplanıyor

    // Eğer A^2 + B^2 = C^2 ise, bu üçgenin bir dik üçgen olduğunu gösterir
    if(A + B == C)
    {
        printf("Dik Ucgen Cizilebilir."); // Dik üçgen çizilebilir mesajı yazdırılıyor
    }
    else
    {
        printf("Dik Ucgen Cizilemez."); // Dik üçgen çizilemez mesajı yazdırılıyor
    }

    return 0; // Programı başarıyla sonlandırıyoruz
}
