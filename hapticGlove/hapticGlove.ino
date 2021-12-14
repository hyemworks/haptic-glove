/**********************************************

[[ Final Arduino Project - VR Haptic Glove ]] 


Class : Physical Computing & Control
Prof  : Kim Yoon Ji

Chung-Ang University
Art & Technology

Computer Art
20196652 Yang Hye Min

***********************************************/

// Define Finger Node
#define F_THUMB   A0
#define F_INDEX   A1
#define F_MIDDLE  A2
#define F_RING    A3
#define F_PINKY   A4

// Define Motor Node
#define M_THUMB_1 13

#define M_INDEX_1 12
#define M_INDEX_2 11

#define M_MIDDLE_1  10
#define M_MIDDLE_2  9

#define M_RING_1  8
#define M_RING_2  7

#define M_PINKY_1 6
#define M_PINKY_2 5

#define M_PALM_1  4
#define M_PALM_2  3
#define M_PALM_3  2


// Angle of finger bend
int a_thumb   = 0;
int a_index   = 0;
int a_middle  = 0;
int a_ring    = 0;
int a_pinky   = 0;


  
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
  // Set finger data to json string
  String fingerDataJSON = createJSON();
  sendSerial(fingerDataJSON);


  // Set data of each finger - Vibrator
  receiveSerial();
  parseJSON();
  // play vibration mode
  setFingerData();

}

