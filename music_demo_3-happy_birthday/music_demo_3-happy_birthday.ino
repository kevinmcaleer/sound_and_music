#include "tones.h"


int noteDurations[] = { 
  2,2,1,1,1,1,
  2,2,1,1,1,1,
  2,2,1,1,1,1,1,
  2,2,1,1,1,1
};

int happy_birthday[] =  {
  G4, G4, A4, G4, C4, B4,
  G4, G4, A4, G4, D4, C4,
  G4, G4, G4, E5, C4, B4, A4, 
  F4, F4, E4, C4, D4, C4
  };

void playMelody() {
for (int thisNote = 0; thisNote < sizeof(happy_birthday) ; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    // e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(4, happy_birthday[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    
    // stop the tone playing:
    noTone(8);
  }
}

void setup() {
  // put your setup code here, to run once:
  playMelody();
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
