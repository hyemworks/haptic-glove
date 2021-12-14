#include "Arduino_JSON.h"


// Get data of each finger - FLEX SENSOR
void getFingerData()
{
  a_thumb = analogRead(F_THUMB);
  a_index = analogRead(F_INDEX);
  a_middle  = analogRead(F_MIDDLE);
  a_ring  = analogRead(F_RING);
  a_pinky = analogRead(F_PINKY);
}




// Set data of each finger - VIBRATOR
void setFingerData()
{
  
}
