## Tante culik aku - Arduino (generate lyrics: "Tante culik aku dong" — reff)

Proyek sederhana untuk menampilkan lirik (reff) "Tante culik aku dong" pada modul LCD 16x2 yang dikendalikan oleh Arduino Uno. Proyek ini dibuat untuk disimulasikan di Wokwi dan sebagai contoh dasar bagaimana menampilkan teks/lagu secara berurutan pada LCD melalui I2C.

### Apa yang ada di repositori
- `sketch.ino` — sketch Arduino yang menampilkan beberapa baris lirik di LCD.
- `diagram.json` — tata letak dan koneksi Wokwi (menghubungkan LCD I2C ke A4/A5 pada Uno).
- `wokwi-project.txt` — metadata / link unduhan Wokwi.
- `libraries.txt` — daftar pustaka yang digunakan (LiquidCrystal I2C).

### Perangkat keras (hardware)
- Arduino Uno (atau papan kompatibel)
- LCD 16x2 dengan interface I2C (alamat default di sketch: `0x27`)

Wiring (sesuai `diagram.json` / Wokwi):
- LCD SDA -> Uno A4
- LCD SCL -> Uno A5
- LCD VCC -> 5V
- LCD GND -> GND

### Dependensi perangkat lunak
- Arduino core (IDE atau CLI)
- Library: `LiquidCrystal I2C` (pustaka I2C untuk LCD). Juga `Wire.h` yang termasuk pada install Arduino.

### Cara menjalankan (Wokwi)
1. Buka halaman proyek Wokwi: https://wokwi.com/projects/440361551885956097
2. Tekan tombol Play ▶ untuk memulai simulasi.
3. Hasil: LCD pada simulasi akan menampilkan baris-baris lirik secara bergantian dengan delay (sesuai `sketch.ino`).

### Cara menjalankan (lokal)
1. Buka `sketch.ino` di Arduino IDE.
2. Pastikan library `LiquidCrystal I2C` terpasang (Library Manager atau manual).
3. Sambungkan LCD sesuai wiring di atas, pilih board Arduino Uno, lalu Upload.

### Penjelasan singkat kode (`sketch.ino`)
- Menggunakan `LiquidCrystal_I2C lcd(0x27, 16, 2)` untuk inisialisasi.
- Pada `loop()` kode menampilkan beberapa frasa lirik pada baris pertama/ke-2 dengan `lcd.print()` dan `delay(3000)` antar-frasa.
- Kode saat ini adalah implementasi paling sederhana: menampilkan teks statis berulang.

### Kontrak kecil (inputs / outputs)
- Input: pasokan daya dan modul LCD I2C terhubung (alamat I2C sesuai).
- Output: teks lirik yang tampil pada LCD 16x2.
- Error modes: alamat I2C salah (LCD tidak menampilkan apa-apa), kabel tidak terhubung, atau library tidak terpasang.

### Edge cases & peningkatan yang disarankan
- Jika alamat I2C berbeda (bukan `0x27`), gunakan I2C scanner untuk menemukan alamat dan perbarui konstruktor.
- Untuk lirik panjang: implementasikan scrolling, paging, atau PROGMEM untuk menyimpan teks dalam memori flash.
- Tambahkan tombol untuk mengganti verse/reff, atau tambahkan buzzer untuk melodi.
- Gunakan timer non-blokir (`millis()`) agar UI lebih responsif dibanding `delay()`.

### Files changed / created
- `README.md` — (ini) penjelasan proyek singkat.

---
Ringkasan: README ini menjelaskan tujuan proyek, cara mensimulasikan di Wokwi, wiring, dependensi, dan opsi perbaikan. Jika Anda mau, saya bisa:
- Menambahkan I2C scanner kecil (`i2c_scanner.ino`) ke repositori.
- Mengganti `delay()` dengan state-machine berbasis `millis()` untuk non-blocking display.

Jika ingin saya tambahkan salah satu dari opsi di atas, beri tahu pilihan Anda dan saya akan implementasikan.
