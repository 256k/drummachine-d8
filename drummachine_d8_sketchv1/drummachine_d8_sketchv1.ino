#include <MIDI.h>  // Add Midi Library
MIDI_CREATE_DEFAULT_INSTANCE();

# define kick 2
# define snare 3
# define chh 4
# define ohh 5
# define rim 6
# define clap 7
# define ride 8
# define crash 9

pinMode(kick, OUTPUT);
pinMode(snare, OUTPUT);
pinMode(chh, OUTPUT);
pinMode(ohh, OUTPUT);
pinMode(rim, OUTPUT);
pinMode(clap, OUTPUT);
pinMode(ride, OUTPUT);
pinMode(crash, OUTPUT);
 
int midichannel = 16;

void NoteON(byte channel, byte pitch, byte velocity) {
  
}

void setup() {
  // put your setup code here, to run once:
MIDI.begin(midichannel); // Initialize the Midi Library.
MIDI.setHandleNoteOn(NoteON);
MIDI.turnThruOff();

}

void loop() {
  // put your main code here, to run repeatedly:
MIDI.read();
}
