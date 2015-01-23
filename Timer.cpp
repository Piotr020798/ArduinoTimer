#include "timer.h"

Timer::Timer()
{
  reset();
}


void Timer::reset()
{
  startTime = millis();
}

unsigned long Timer::get()
{
  return millis() - startTime;
}