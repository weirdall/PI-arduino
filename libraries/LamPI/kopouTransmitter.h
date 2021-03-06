/*
  Morse.h - Library for Kopou wireless switches.
  Created by Sergey Chernov, October 25, 2013.
  Released into the public domain.
*/

#ifndef Kopou_h
#define Kopou_h

#include "Arduino.h"

class Kopou
{
  public:
    Kopou(byte pin);
    void sendButton(unsigned int remoteID, byte keycode);
  private:
    byte txPin;
	byte i; // just a counter
	byte pulse; // counter for command repeat
	boolean high; // pulse "sign"
	void selectPulse(byte inBit);
	void sendPulse(byte txPulse);
};

#endif