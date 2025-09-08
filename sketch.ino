#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int kolom = 16;
int baris = 2;
// Inisialisasi LCD I2C (alamat 0x27, ukuran 16x2)
LiquidCrystal_I2C lcd(0x27, kolom, baris);
void setup() {
lcd.init(); // Inisialisasi LCD
lcd.backlight(); // Nyalakan lampu latar
}
void loop() {
// Tampilkan teks di baris pertama
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("tanteee");
delay(3000);
// Tampilkan teks berikutnya
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("sudah terbiasa");
lcd.setCursor(0, 1);
lcd.print("terjadi tante");
delay(3000);
// Tampilkan teks berikutnya
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("teman datang");
lcd.setCursor(0, 1);
lcd.print("ketika lagi");
delay(3000);
// Tampilkan teks berikutnya
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("butuh saja");
delay(3000);
// Tampilkan teks lain
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("coba kalau");
lcd.setCursor(0, 1);
lcd.print("lagi susah");
delay(3000);
// Tampilkan teks terakhir
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("mereka semua");
lcd.setCursor(0, 1);
lcd.print("menghilang");
delay(3000);
}