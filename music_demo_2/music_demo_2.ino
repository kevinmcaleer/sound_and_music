#include "tones.h"

//"gecegCEDCe#gggEDCbabCCgecgecegCEDCe#gggEDCbabCCgecEEEFGGFEDEFFFEDCbabCe#ggCCCbaaaDFEDCCbggCDEFGCDEFDC ";
int noteDurations[] = { 3, 1, 4, 4, 4, 8, 3, 1, 4, 4, 4, 8, 2, 2, 6, 2, 4, 8, 3, 1, 4, 4, 4, 4, 8, 3,
1, 4, 4, 4, 8, 3, 1, 4, 4, 4, 8, 2, 2, 6, 2, 4, 8, 3, 1, 4, 4, 4, 4, 4, 2, 2, 4, 4, 4, 8, 2,
2, 4, 4, 4, 8, 4, 6, 2, 4, 8, 3, 1, 6, 4, 4, 8, 4, 4, 4, 2, 2, 4, 4, 4, 4, 2, 2, 2, 2, 4, 4,
2, 2, 6, 2, 2, 2, 8, 2, 2, 6, 2, 4, 8, 1
};

int star_spangled_banner[] =  {
  G4, E4, C4, C5, E5, D5, E4, GS4, G4, G4, E5, D5, C5, B4, A4, B4, C5, C5, G4, E4, C4
  };

void playMelody() {
for (int thisNote = 0; thisNote < 12 ; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(4, star_spangled_banner[thisNote], noteDuration);

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

}

void loop() {
  // put your main code here, to run repeatedly:
  playMelody();
}
