 
// Set data format to json string
String createJSON()
{
  JSONVar tmpObject;

  tmpObject["type"] = "fingerData";
  
  tmpObject["thumb"] = String(a_thumb);
  tmpObject["index"] = String(a_index);
  tmpObject["middle"] = String(a_middle);
  tmpObject["ring"] = String(a_ring);
  tmpObject["pinky"] = String(a_pinky);
  
  String fingerData = JSON.stringify(tmpObject);

  return String(fingerData);
}



// Parse json data
void parseJSON()
{
  if(JSONComplete)
  {
    JSONVar tmpObject = JSON.parse(inputJSON);

    if (JSON.typeof(tmpObject) == "undefined")
    {
      Serial.println("Parsing input failed!");
      return;
    }
    
    if ((const char*)tmpObject["type"]=="collision")
    {
      JSONComplete = setFingerData(tmpObject);
      Serial.println("-------------------------------------------------------------------");
    }
    
  }

  //delay(200);
}
