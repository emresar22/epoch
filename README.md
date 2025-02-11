# 🛫 Uçuş Süresi Hesaplama Programı

Bu C programı, kullanıcının girdiği iki farklı tarih ve saat bilgisini kullanarak **uçuş süresini** hesaplar.  
Program, tarihleri **epoch zamanına çevirir** ve aralarındaki farkı saat, dakika ve saniye cinsinden ekrana yazdırır.  

## 🚀 Özellikler
- Kullanıcıdan **kalkış ve varış zamanı** alır.  
- Tarih ve saatleri **epoch zamanına çevirir** (`mktime` fonksiyonu kullanılarak).  🛫 Kalkış saatini giriniz:
Yıl: 2025
Ay: 2
Gün: 10
Saat: 14
Dakika: 30
Saniye: 0

🛬 Varış saatini giriniz:
Yıl: 2025
Ay: 2
Gün: 10
Saat: 22
Dakika: 15
Saniye: 0

- **İki epoch zamanı arasındaki farkı** hesaplar.  
- Sonucu **saat, dakika ve saniye** olarak ekrana yazdırır.  

## 📦 Kurulum ve Kullanım  
1. **Kaynak kodu indirin** veya klonlayın:  
   ```sh
   git clone https://github.com/kullaniciadi/ucus-suresi.git
   cd ucus-suresi
🔹 Kalkış Epoch Zamanı: 1739190600
🔹 Varış Epoch Zamanı: 1739216100

✈️  Uçuş süresi: 7 saat 45 dakika 0 saniye
