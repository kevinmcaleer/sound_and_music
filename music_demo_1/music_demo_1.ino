#include "tones.h"

void setup() {
  // put your setup code here, to run once:

}

// notes in the melody:
int melody[] = {
  F3, D3, AS2, AS2, AS2, C3, D3, DS3, F3, F3, F3 ,D3 
};

int noteDurations[] = {
  8,  8,   4,   4,   8,  8,  8,  8,  4,  4,   4,  8 
};

struct Note {
 int key;
 int duraiton;
};

void playMelody() {
for (int thisNote = 0; thisNote < 12 ; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(4, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  playMelody();

}
