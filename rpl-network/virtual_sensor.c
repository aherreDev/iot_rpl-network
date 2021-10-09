#include <stdlib.h>
#include "virtual-sensor.h"

float random_value(float min, float max) {
  return min + (rand() / (float) RAND_MAX) * (max - min);
}

float read_temperature(){
  return random_value(0, 35);
}

float read_humidity(){
  return random_value(40, 80);
}
