
// Get data of each finger - Sensor
void getFingerData()
{
  a_thumb = analogRead(F_THUMB);
  a_index = analogRead(F_INDEX);
  a_middle  = analogRead(F_MIDDLE);
  a_ring  = analogRead(F_RING);
  a_pinky = analogRead(F_PINKY);
}
