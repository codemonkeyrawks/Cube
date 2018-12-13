// Date: 12/13/2018
// Author: Adafruit & (codemonkeyrawks)
// Licence: Creative Commons-Share-Alike-Attribution
// Version: 1.02b-alpha-1

// SPI, MP3, SD Card: VS1053
// Serial: MIDI VS1053
#include <SPI.h>
#include <Adafruit_VS1053.h>
#include <SD.h>
#include <SoftwareSerial.h>

// VS1053: PIN Layout
#define VS1053_RX  2     // MIDI PIN
#define VS1053_DREQ 3    // Interrup
#define VS1053_CARDCS 4  // Chip Select: SD Card
#define VS1053_DCS 8     // Data Select
#define VS1053_RESET 9   // Reset: Not Used
#define VS1053_CS 10     // Chip Select: VS1053
#define POT A5

// VS1053: MIDI/User Options
#define VS1053_BANK_DEFAULT 0x00
#define VS1053_BANK_DRUMS1 0x78
#define VS1053_BANK_DRUMS2 0x7F
#define VS1053_BANK_MELODY 0x79
#define VS1053_GM1_OCARINA 80
#define MIDI_NOTE_ON  0x90
#define MIDI_NOTE_OFF 0x80
#define MIDI_CHAN_MSG 0xB0
#define MIDI_CHAN_BANK 0x00
#define MIDI_CHAN_VOLUME 0x07
#define MIDI_CHAN_PROGRAM 0xC0

// USER Defined 

// VS1053: Init Player
Adafruit_VS1053_FilePlayer musicPlayer =
Adafruit_VS1053_FilePlayer(VS1053_RESET, VS1053_CS, VS1053_DCS, VS1053_DREQ, VS1053_CARDCS);

// VS1053: Init MIDI
SoftwareSerial VS1053_MIDI(0, 2);

void setup() {

  // AMP Startup Section //
  // Define: PIN DEF
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  
  // MIDI Control: HIGH: OFF, LOW: ON
  pinMode(5, OUTPUT);

  delay(500);

  // Flash LED if Chip is not found!
  if (! musicPlayer.begin()) {
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    delay(100);
  }

  // Flash LED if SD is not found!
  if (!SD.begin(VS1053_CARDCS)) {
    digitalWrite(7, HIGH);
    delay(300);
    digitalWrite(7, LOW);
    delay(300);
  }

  // VS1053 Startup Section //
  VS1053_MIDI.begin(31250);

}

void loop() { 
  setMIDI();
  setMP3();
}

// User Passes MP3 Files
void setMP3() {

  // Scan Volume
  setMP3Vol();

  // MIDI: LOW, SD: HIGH
  digitalWrite(5, LOW);
  delay(500);
  
  musicPlayer.useInterrupt(VS1053_FILEPLAYER_PIN_INT);
  musicPlayer.startPlayingFile("track01.mp3");

  for (int x = 0; x < 60; x++) {
      setMP3Vol();
    delay(250);
  }

  musicPlayer.stopPlaying();
  delay(100);

  musicPlayer.useInterrupt(VS1053_FILEPLAYER_PIN_INT);
  musicPlayer.startPlayingFile("track02.mp3");
  
  for (int x = 0; x < 60; x++) {
      setMP3Vol();
    delay(250);
  }

  musicPlayer.stopPlaying();
  delay(100);

  musicPlayer.useInterrupt(VS1053_FILEPLAYER_PIN_INT);
  musicPlayer.startPlayingFile("track03.mp3");
  
  for (int x = 0; x < 60; x++) {
      setMP3Vol();
    delay(250);
  }

  musicPlayer.stopPlaying();
  delay(100);

  // Disable: AMP
  disableAMP();

  // Wait for IC to Clear
  musicPlayer.softReset();
  delay(500);
}

//User Passes MIDI Note
void setMIDI() {

  // Scan Volume
  setMIDVol();

  // MIDI: LOW, SD: HIGH
  digitalWrite(5, HIGH);
  delay(500);

  // MIDI: BANKS
  midiSetChannelBank(0, VS1053_BANK_MELODY);
  midiSetInstrument(0, VS1053_GM1_OCARINA);

  for (uint8_t i=60; i<69; i++) {
    midiNoteOn(0, i, 127);
    delay(100);
    midiNoteOff(0, i, 127);
  }

  delay(100);

  // Disable: AMP
  disableAMP();

  // Wait for IC to Clear
  musicPlayer.softReset();
  delay(500);
  
}

void setMP3Vol() {

  // Read POT Value
  int PO = analogRead(POT);
  delay(20);

  // Set Volume: Scale 0 - 10 x 2
  for (int x = 0; x <= 10; x++) {
    // Range: 1020 / 10 = 51.05
    int calc1 = 102 * x;
    int calc2 = (102 * (x + 1));
    if (x > 9) {
      disableAMP();
      break;
    }
    else if ((PO >= calc1) && (PO <= calc2)) {
      enableAMP();
      musicPlayer.setVolume(x+x,x+x);
      break;
    }
  }
}

void setMIDVol() {
  // Read POT Value
  int PO = analogRead(POT);
  delay(20);

  // Set Volume: Scale 0 - 120
  for (int x = 0; x <= 120; x++) {
    // Range: 1020 / 120 = 8.53
    int calc1 = 8.53 * x;
    int calc2 = (8.53 * (x + 1));
    if (x > 100) {
      disableAMP();
      break;
    }
    else if ((PO >= calc1) && (PO <= calc2)) {
      enableAMP();
      midiSetChannelVolume(x, x);
      break;
    }
  }
}

void disableAMP() {
  musicPlayer.setVolume(20,20);
  midiSetChannelVolume(0, 0);
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
}

void enableAMP() {
  digitalWrite(0,HIGH);
  digitalWrite(1,HIGH);
}

void midiSetInstrument(uint8_t chan, uint8_t inst) {
  if (chan > 15) return;
  inst --; // page 32 has instruments starting with 1 not 0 :(
  if (inst > 127) return;
  
  VS1053_MIDI.write(MIDI_CHAN_PROGRAM | chan);  
  VS1053_MIDI.write(inst);
}


void midiSetChannelVolume(uint8_t chan, uint8_t vol) {
  if (chan > 15) return;
  if (vol > 127) return;
  
  VS1053_MIDI.write(MIDI_CHAN_MSG | chan);
  VS1053_MIDI.write(MIDI_CHAN_VOLUME);
  VS1053_MIDI.write(vol);
}

void midiSetChannelBank(uint8_t chan, uint8_t bank) {
  if (chan > 15) return;
  if (bank > 127) return;
  
  VS1053_MIDI.write(MIDI_CHAN_MSG | chan);
  VS1053_MIDI.write((uint8_t)MIDI_CHAN_BANK);
  VS1053_MIDI.write(bank);
}

void midiNoteOn(uint8_t chan, uint8_t n, uint8_t vel) {
  if (chan > 15) return;
  if (n > 127) return;
  if (vel > 127) return;
  
  VS1053_MIDI.write(MIDI_NOTE_ON | chan);
  VS1053_MIDI.write(n);
  VS1053_MIDI.write(vel);
}

void midiNoteOff(uint8_t chan, uint8_t n, uint8_t vel) {
  if (chan > 15) return;
  if (n > 127) return;
  if (vel > 127) return;
  
  VS1053_MIDI.write(MIDI_NOTE_OFF | chan);
  VS1053_MIDI.write(n);
  VS1053_MIDI.write(vel);
}
