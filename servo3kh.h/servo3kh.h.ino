//MEMASUKAN LIBRARY SERVO KEDALAM SERVO
#include <Servo.h>

//MEMASUKAN URUTAN NAMA KEDALAM SERVO
Servo servo13;
Servo servo12;
Servo servo11;

//POSISI SERVO KETIKA SEBELUUM DI NYALAKAN DAN DI MASUKAN PROGRAM 
int servoPos = 0;

void setup()
{
  servo13.attach(13);
  servo12.attach(12);
  servo11.attach(11);
}

void loop()
{
  //scan from 0 to 180 degrees
  for (servoPos = 0; servoPos < 180; servoPos++) 
  {
    servo13.write(servoPos);
    servo12.write(servoPos);
    servo11.write(servoPos); 
    delay(1000);
  }
  //scan back from 180 to 0 degrees
   for (servoPos = 180; servoPos > 0; servoPos--)
  {
    servo13.write(servoPos);
    servo12.write(servoPos);
    servo11.write(servoPos);
    delay(1000);
  }
   
}
