/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

int LDR= A2;          // membuat variabel LDR untuk pin A2
int LED= 13;          // membuat variabel LED untuk pin 13
int nilaiLDR= 0;  // variabel nilai awal untuk nilaiLDR
void setup(){
  pinMode(LED, OUTPUT);          // menentukan LED menjadi OUTPUT
  Serial.begin(9600);          // komunikasi Arduino ke Komputer
}
void loop(){
  nilaiLDR= analogRead(LDR);  // menyimpan nilai yang dibaca dari LDR ke variabel nilaiLDR
  Serial.print("NilaiLDR= ");         // menampilkan teks nilaiLDR=
  Serial.println(nilaiLDR);                 // menampilkan nilai dari nilaiLDR
  if(nilaiLDR < 500) {          // jika nilai dari LDR kurang dari 500
    digitalWrite(LED, HIGH);         // lampu LED menyala
  }
  else  {                           // jika tidak
    digitalWrite(LED, LOW);         // lampu LED mati
  }
}


