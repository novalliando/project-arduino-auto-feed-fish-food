//memasukan perintah kedalam pin led
#define red 4
#define green 3
void setup() 
{
  // memasukan code kedalam led
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() 
{
  // memasukan main kedalam led dan berapa lama ia menyala
 digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(9000); // Wait for 1000 millisecond(s)
}
