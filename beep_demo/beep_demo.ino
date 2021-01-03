// Sound and Music
// Kevin McAleer January 2021

int buzzerPin = 4; // Our buzzer is connected to pin 4

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
  beep();
}


void beep() {
  // put your main code here, to run repeatedly:

  digitalWrite(buzzerPin, HIGH);
  delayMicroseconds(1000000000);
  digitalWrite(buzzerPin, LOW);
  delayMicroseconds(1000000000);
}

void loop() {
  
}
