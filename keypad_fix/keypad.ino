/*
 * Kelompok 7 TRE :
 * Muhammad Hanif Setyo S.  (19/447063/SV/16782)
 * Muhammad Yusuf Falah     (19/447064/SV/16783)
 * Nugroho Wisnu Murti      (19/447065/SV/16784)
 * Robertus Wendika         (19/447066/SV/16785)
 */
#include <Keypad.h>//Library keypad

const byte ROWS = 4;//inisialisasi baris berjumlah 4
const byte COLS = 4;//inisialisasi baris berjumlah 4

char Keys[ROWS][COLS] = {//inisialisasi pengkarakteran
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};//inisialisasi pin arduino
byte colPins[COLS] = {5, 4, 3, 2};//inisialisasi pin arduino

Keypad customKeypad = Keypad(makeKeymap(Keys), rowPins, colPins, ROWS, COLS);//menggabungkan semua inisialisasi menjadi satu

void setup() {//setup serial print
  Serial.begin(9600);
}

void loop() {//program looping
  char key = customKeypad.getKey();//persamaan variabel untuk memudahkan penulisan
      if (key == '0'){
         Serial.println("Selamat datang di UGM");
      }
      else if (key == '1') {
        Serial.println("Selamat datang di Indomaret");
      }
      else if (key == '2'){
         Serial.println("Selamat datang di Matahari");
      }
      else if (key == '3'){
         Serial.println("Selamat datang di Mirota");
      }
      else if (key == '4'){
         Serial.println("Selamat datang di Mana-mana");
      }
      else if (key == '5'){
         Serial.println("Selamat datang di Mana Saja");
      }
      else if (key == '6'){
         Serial.println("Selamat datang di Rumah");
      }
      else if (key == '7'){
         Serial.println("Selamat datang di Sekolah");
      }
      else if (key == '8'){
         Serial.println("Selamat datang di Kantor");
      }
      else if (key == '9'){
         Serial.println("Selamat datang di Gedung 1");
      }
      else if (key == '#'){
         Serial.println("Selamat datang di DTEDI");
      }
      else if (key == '*'){
         Serial.println("Selamat datang di Elektro");
      }
      else if (key == 'A'){
         Serial.println("Selamat datang di TRE");
      }
      else if (key == 'B'){
         Serial.println("Selamat datang di SV");
      }
      else if (key == 'C'){
         Serial.println("Selamat datang di Grafika");
      }
      else if (key == 'D'){
         Serial.println("Selamat datang di Laborat");
      }
  }
