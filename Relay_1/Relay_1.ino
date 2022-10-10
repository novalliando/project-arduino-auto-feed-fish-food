#define r1 8
#define r2 7
#define r3 6
#define r4 5
void setup() {
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
}

void loop() {
   // Nyalain relay
    digitalWrite(r1, LOW);//NO=NYALA
    digitalWrite(r2, LOW);//NO=NYALA
    digitalWrite(r3, LOW);//NO=NYALA
    digitalWrite(r4, LOW);//NO=NYALA
    // Kasi Delay 2 detik
    delay(5000);
    digitalWrite(r1, HIGH);
    digitalWrite(r2, HIGH);
    digitalWrite(r3, HIGH);
    digitalWrite(r4, HIGH);
    // Kasi Delay 2 detik
    delay(5000);
     // MATIKAN RELAY
    digitalWrite(r1, LOW);//NO=NYALA
    digitalWrite(r2, LOW);//NO=NYALA
    digitalWrite(r3, LOW);//NO=NYALA
    digitalWrite(r4, LOW);//NO=NYALA
   
}
