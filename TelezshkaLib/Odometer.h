#ifndef ODOMETER_H
#define ODOMETER_H

#if ARDUINO >= 100
  #include <Arduino.h>
#else
  #include <WProgram.h>
#endif

#include "defines.h"

class Odometer
{
  private:
    double _distance;
  public:
    Odometer();
    void resetOdometer();
    void updateDistance();
    double getDistance();

    Odometer& operator= (Odometer &some);
};

#endif