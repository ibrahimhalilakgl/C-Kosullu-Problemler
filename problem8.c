#include <stdio.h>

int main(){

    int gun; // Kullanıcının gireceği gün numarasını tutmak için bir değişken tanımlanıyor

    printf("Lutfen Haftanin Kacinci Gununu Yazdirmak Istediginizi Yaziniz: "); // Kullanıcıdan haftanın kaçıncı gününü yazdırmak istediğini sormasını istiyoruz
    scanf("%d", &gun); // Girilen gün numarasını 'gun' değişkenine atıyoruz

    if(gun == 1) // Eğer girilen gün 1 ise, Pazartesi yazdırılır
    {
        printf("Pazartesi");
    }
    else if(gun == 2) // Eğer girilen gün 2 ise, Salı yazdırılır
    {
        printf("Sali");
    }
    else if(gun == 3) // Eğer girilen gün 3 ise, Çarşamba yazdırılır
    {
        printf("Carsamba");
    }
    else if(gun == 4) // Eğer girilen gün 4 ise, Perşembe yazdırılır
    {
        printf("Persembe");
    }
    else if(gun == 5) // Eğer girilen gün 5 ise, Cuma yazdırılır
    {
        printf("Cuma");
    }
    else if(gun == 6) // Eğer girilen gün 6 ise, Cumartesi yazdırılır
    {
        printf("Cumartesi");
    }
    else if(gun == 7) // Eğer girilen gün 7 ise, Pazar yazdırılır
    {
        printf("Pazar");
    }
    else // Eğer girilen gün 1 ile 7 arasında değilse, geçersiz bir giriş olduğunu belirten mesaj yazdırılır
    {
        printf("Girilen Gun Sayisi Tanimlanmadi.");
    }

    return 0; // Programı başarıyla sonlandırıyoruz
}
