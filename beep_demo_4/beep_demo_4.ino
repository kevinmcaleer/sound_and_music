// Sound and Music
// Kevin McAleer January 2021
// Rhythm

int buzzerPin = 4; // Our buzzer is connected to pin 4

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i=1; i< 100;i++) {
    digitalWrite(buzzerPin, HIGH);
    delayMicroseconds(i);
    digitalWrite(buzzerPin, LOW);
    delayMicroseconds(i*1000);
  }
}
