
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
boolean setFingerData(JSONVar tmpObject)
{
  int power;
  
  if((bool)tmpObject["grip"]) power = 180;
  else if((bool)tmpObject["touch"]) power = 50;
  else power = 0;

  digitalWrite(12,power);
  digitalWrite(11,power);
  digitalWrite(10,power);
  digitalWrite(9,power);
  digitalWrite(8,power);
  
  return false;
}
