//This is Sana Yasamani Khiabanis Project!
// The red and white blink, and the yellow one fades !


int ledPin = 11;

void setup() {
   pinMode(9, OUTPUT);
   pinMode(13, OUTPUT);

}

void loop() {
  
digitalWrite(9, HIGH); //turn the red light on
delay(400);
digitalWrite(9, LOW);//turn the red light off
delay(100);
digitalWrite(13, HIGH);//turn the white light on
delay(400);
digitalWrite(13, LOW);//turn the white light off
delay(300);

//time for the fade !

for (int fadeValue = 0 ; fadeValue <=250; fadeValue += 5) {
  analogWrite(11, fadeValue);
  delay(40);
}

for (int fadeValue = 250 ; fadeValue >= 0; fadeValue -= 5) {
  analogWrite(11, fadeValue);
  delay(40);
}
}
