#include "notes.h"

int button = 11;
bool playing = false;
bool pressed = false;

int notes[] = {
  NOTE_D3, NOTE_D3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_C3, NOTE_C3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_B2, NOTE_B2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_AS2, NOTE_AS2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_D3, NOTE_D3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_C3, NOTE_C3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_B2, NOTE_B2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_AS2, NOTE_AS2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,

  NOTE_F3, NOTE_F3, NOTE_F3, NOTE_F3, NOTE_F3, NOTE_D3, NOTE_D3, 0,
  NOTE_F3, NOTE_F3, NOTE_F3, NOTE_G3, NOTE_GS3, NOTE_A3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_G3,
  NOTE_F3, NOTE_F3, NOTE_F3, NOTE_G3, NOTE_GS3, NOTE_A3, NOTE_C4, NOTE_A3,
  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_A3, NOTE_D4, NOTE_C4, 0, NOTE_C4, 0,
  NOTE_A3, NOTE_A3, NOTE_A3, NOTE_A3, NOTE_A3, NOTE_G3, NOTE_G3, 0,
  NOTE_A3, NOTE_A3, NOTE_A3, NOTE_A3, NOTE_A3, NOTE_G3, NOTE_D4, NOTE_A3, NOTE_G3,
  NOTE_D4, NOTE_G3, NOTE_A3, NOTE_E3, NOTE_G3, NOTE_D3, NOTE_C4, NOTE_D3, NOTE_G3, NOTE_D3, NOTE_F3, NOTE_G2, NOTE_AS2, NOTE_G2,
  NOTE_AS2, NOTE_C3, NOTE_D3, NOTE_F3, NOTE_E3, 0,
  
  0, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_G3, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3,
  NOTE_A3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_G3, 0, NOTE_GS3, NOTE_A3,
  NOTE_C4, NOTE_A3, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_G3, NOTE_GS3, NOTE_A3, NOTE_C4,
  NOTE_CS4, NOTE_GS3, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_G3, 0,
  NOTE_F3, NOTE_G3, NOTE_A3, NOTE_F4, NOTE_E4, NOTE_D4,
  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_E4,
  NOTE_A4, NOTE_A4, NOTE_GS4, NOTE_G4, NOTE_FS4, NOTE_F4, NOTE_E4, NOTE_DS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4,

  NOTE_AS2, NOTE_F3,
  NOTE_E3, NOTE_D3,
  NOTE_F3,
  NOTE_F3,
  NOTE_AS2, NOTE_F3,
  NOTE_E3, NOTE_D3,
  NOTE_D3,
  NOTE_D3,
  
  NOTE_D3, NOTE_D3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_C3, NOTE_C3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_B2, NOTE_B2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_AS2, NOTE_AS2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_D3, NOTE_D3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_C3, NOTE_C3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_B2, NOTE_B2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_AS2, NOTE_AS2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_D3, NOTE_D3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_C3, NOTE_C3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_B2, NOTE_B2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_AS2, NOTE_AS2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_D3, NOTE_D3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_C3, NOTE_C3, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_B2, NOTE_B2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  NOTE_AS2, NOTE_AS2, NOTE_D4, 0, NOTE_A3, 0, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_F3, NOTE_A3,
  
  NOTE_D3
};

int noteDurations[] = {
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  
  8, 16, 8, 8, 8, 8, 4, 16,
  8, 16, 8, 8, 8, 32, 32, 16, 16, 16, 6,
  8, 16, 8, 8, 8, 8, 8, 6,
  8, 8, 16, 16, 16, 4, 8, 6, 8,
  8, 16, 8, 8, 8, 8, 4, 16,
  8, 16, 8, 8, 8, 8, 8, 16, 8,
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
  8, 16, 8, 8, 2, 16,
  
  2, 16, 16, 16, 16, 16, 16, 16, 16,
  32, 32, 32, 32, 8, 2, 16, 8, 16,
  8, 16, 16, 16, 16, 16, 16, 8, 8, 8, 8,
  8, 8, 16, 16, 16, 2, 16,
  8, 8, 8, 8, 4, 4,
  4, 4, 4, 4,
  2, 16, 16, 16, 16, 16, 16, 16, 16,
  2, 2,
  
  1, 4,
  2, 2,
  1,
  1,
  1, 4,
  2, 2,
  1,
  1,

  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,
  16, 16, 16, 16, 8, 16, 8, 8, 8, 16, 16, 16,

  8
};

int thisNote = 0;
int songLength;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  songLength = sizeof(notes) / sizeof(int);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == HIGH) {
    if (pressed) goto main;
    pressed = true;
    if (playing) playing = false;
    else playing = true;
  } else {
    pressed = false;
  }

  main:
    if (!playing) return;
    int noteDuration = 1500 / noteDurations[thisNote];
    tone(8, notes[thisNote], noteDuration);

    digitalWrite(LED_BUILTIN, HIGH);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);

    digitalWrite(LED_BUILTIN, LOW);
  
    thisNote++;
    if (thisNote == songLength)
    {
      thisNote = 0;
      playing = false;
    }
}
