<<<<<<< HEAD
/*
  RTC library for Arduino Zero.
  Copyright (c) 2015 Arduino LLC. All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/

#ifndef RTC_SENSOR_H
#define RTC_SENSOR_H

#include "RadBit.h"


typedef void(*voidFuncPtr)(void);

class RadSensor {
public:

  RadSensor();
  void begin(bool resetTime = false);

 private:
	 bool _configured;

};

#endif // RTC_ZERO_H
=======
#ifndef __RADSENSOR_H
#define __RADSENSOR_H
#include "RadBit.h"
#include "Arduino.h"

const int modelStrSize = 6;

class RadSensor {

public:

    RadSensor(int pin, float convertV):_sensePin(pin), _convertFactor(convertV){};

    float getConvertFactor() const;
    int getPin( void ) const;
    void getModelStr(char dArry[6]);


protected:
    const int
        _sensePin;

    const float
        _convertFactor;

    char _modelStr[modelStrSize];

    void _setModelStr(char tStr[6]);


};

class Tevisio_RD2014 : public RadSensor{
public:
    Tevisio_RD2014(int sensorPin);
};

class Tevisio_RD3024 : public RadSensor{
public:
    Tevisio_RD3024(int sensorPin);
};



#endif
>>>>>>> master
