/**********************************************

[[ Final Arduino Project - VR Haptic Glove ]] 


Class : Physical Computing & Control
Prof  : Kim Yoon Ji

Chung-Ang University
Art & Technology

Computer Art
20196652 Yang Hye Min

***********************************************/


void setup()
{
  // Set Finger pinmode
  pinMode(F_THUMB, INPUT);
  pinMode(F_INDEX, INPUT);
  pinMode(F_MIDDLE, INPUT);
  pinMode(F_RING, INPUT);
  pinMode(F_PINKY, INPUT);
  
  // Set Motor pinmode
  pinMode(M_THUMB_1, OUTPUT);
  
  pinMode(M_INDEX_1, OUTPUT);
  pinMode(M_INDEX_2, OUTPUT);
  
  pinMode(M_MIDDLE_1, OUTPUT);
  pinMode(M_MIDDLE_2, OUTPUT);
  
  pinMode(M_RING_1, OUTPUT);
  pinMode(M_RING_2, OUTPUT);
  
  pinMode(M_PINKY_1, OUTPUT);
  pinMode(M_PINKY_2, OUTPUT);
  
  pinMode(M_PALM_1, OUTPUT);
  pinMode(M_PALM_2, OUTPUT);
  pinMode(M_PALM_3, OUTPUT);
  
  
  // Setup serial
  Serial.begin(9600);
  while (!Serial); // Wait until Serial is ready
  Serial.println("\n[Serial Settings Completed]");
  Serial.begin(9600);
}




void loop()
{
  // Get data of each finger - Sensor
  getFingerData();
  printSerial();

  // Set data of each finger - Vibrator
  setFingerData();
  printSerial();
  
}


// Print the serial
void printSerial()
{
  Serial.print(a_thumb);
  Serial.print("\t");
  Serial.print(a_index);
  Serial.print("\t");
  Serial.print(a_middle);
  Serial.print("\t");
  Serial.print(a_ring);
  Serial.print("\t");
  Serial.print(a_pinky);
  Serial.println("\n---------------------------------------");

  delay(10);
}
