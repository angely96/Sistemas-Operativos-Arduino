int pin1 = 13;
int pin2 = 12;
int pin3 = 11;
int pin4 = 10;
int pin5 = 9;
int delayt = 1500;


void setup() {
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);
Serial.begin(9600);
}

void loop() {

//0
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
Serial.println("0 -> 00000");
delay(delayt);
 
//01
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
Serial.println("1 -> 00001");
delay(delayt);

//02
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
Serial.println("2 -> 00010");
delay(delayt);

//03
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5,HIGH);
Serial.println("3 -> 00011");
delay(delayt);

digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
Serial.println("4 -> 00100");
delay(delayt);
  
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
Serial.println("5 -> 00101");
delay(delayt);
//06
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
Serial.println("6 -> 00110");
delay(delayt);
  
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
Serial.println("7 -> 00111");
delay(delayt);

digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
Serial.println("8 -> 01000");
delay(delayt);
  
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
Serial.println("9 -> 01001");
delay(delayt);

digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
Serial.println("10 -> 01010");
delay(delayt);
  
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
Serial.println("11 -> 01011");
delay(delayt);
  
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
Serial.println("12 -> 01100");
delay(delayt);
  
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
Serial.println("13 -> 01101");
delay(delayt);
  
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
Serial.println("14 -> 01110");
delay(delayt);
  
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
Serial.println("15 -> 01111");
delay(delayt);
  
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
Serial.println("16 -> 10000");
delay(delayt);
  
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
Serial.println("17 -> 10001");
delay(delayt);
  
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
Serial.println("18 -> 10010");
delay(delayt);
  
  
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
Serial.println("19 -> 10011");
delay(delayt);

digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
Serial.println("20 -> 10100");
delay(delayt);
}
