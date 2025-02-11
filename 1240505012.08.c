#include <stdio.h>
#include <time.h>

// Tarih ve saat  struct 
struct DateTime {
    int Yil, Ay, Gun, Saat, Dakika,Saniye;
};

//  tarih bilgisi alan fonksiyon
void getDateTime(struct DateTime *dt, const char *message) {
    printf("%s\n", message);
    printf("Yil: ");
    scanf("%d", &dt->Yil);
    printf("Ay: ");
    scanf("%d", &dt->Ay);
    printf("Gun: ");
    scanf("%d", &dt->Gun);
    printf("Saat: ");
    scanf("%d", &dt->Saat);
    printf("Dakika: ");
    scanf("%d", &dt->Dakika);
    printf("Saniye: ");
    scanf("%d", &dt->Saniye);
}

// DateTime struct time_t (epoch) zamannýa çeviren fonksiyon
time_t convertToEpoch(struct DateTime dt) {
    struct tm timeinfo = {0};
    timeinfo.tm_year = dt.Yil - 1900;  // tm_year, 1900'dan itibaren sayar
    timeinfo.tm_mon = dt.Ay - 1;     // tm_mon, 0-11 arasý deðer alýr
    timeinfo.tm_mday = dt.Gun;
    timeinfo.tm_hour = dt.Saat;
    timeinfo.tm_min = dt.Dakika;
    timeinfo.tm_sec = dt.Saniye;

    return mktime(&timeinfo);
}

int main() {
    struct DateTime departure, arrival;

    // Kullanýcýdan kalkýþ ve varýþ bilgilerini al
    getDateTime(&departure, " Kalkis saatini giriniz:");
    getDateTime(&arrival, " Varis saatini giriniz:");

    // Epoch zamanlarýna çevirme
    time_t departure_epoch = convertToEpoch(departure);
    time_t arrival_epoch = convertToEpoch(arrival);

    //Zaman farkýný hesapla
    time_t duration = difftime(arrival_epoch, departure_epoch);

    //  saat, dakika ve saniye olarak hesapla
    int hours = duration / 3600;
    int minutes = (duration % 3600) / 60;
    int seconds = duration % 60;

    printf("\n Kalkis Epoch Zamani: %ld\n", departure_epoch);
    printf(" Varis Epoch Zamani: %ld\n", arrival_epoch);
    printf("\n  Ucus suresi: %d saat %d dakika %d saniye\n", hours, minutes, seconds);

    return 0;
}
