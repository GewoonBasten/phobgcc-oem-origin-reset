#ifndef VARIABLES_H
#define VARIABLES_H

#include "structsAndEnums.h"


Buttons _btn;

Buttons _hardware;

RawStick _raw;

StickParams _aStickParams;

StickParams _cStickParams;

//ADC reference values for Phob 1.0
float _ADCScale = 1;
float _ADCScaleFactor = 1;

int _rumblePower = 0;

float _dT;

// RAM-only live origin offsets. Recaptured by X+Y+Start; never written to flash/EEPROM.
int _axOriginOff = 0;
int _ayOriginOff = 0;
int _cxOriginOff = 0;
int _cyOriginOff = 0;

#endif //VARIABLES_H
