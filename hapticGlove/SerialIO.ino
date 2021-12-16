// Send the data to the serial port
void sendSerial(String send_data)
{
  Serial.println(send_data);
}


// Receive the data from the serial port
void receiveSerial()
{
  // Reading Serial
  /*
  if (Serial.available() > 0)
  {
    int incomingByte = Serial.read();
    Serial.println(incomingByte, DEC);
  }
*/

  if (Serial.available()>0)
  {
    char inChar = (char)Serial.read();

    inputJSON += inChar;

    if (inChar == '\n')
    {
      JSONComplete = true;
    }
  } 
}

// {"type":"collision","touch":"true","grip":"false"}
