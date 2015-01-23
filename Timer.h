#ifndef Timer_h
#define Timer_h

#include "Arduino.h"

class Timer
{
private:
  unsigned long startTime;
public:
  void reset();
  unsigned long get();
  Timer();
};

#endif