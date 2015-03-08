// Sample Arduino sketch for use with usb-serial-for-android OTG and APP INVENTOR 2
// 09/02/2014
// LED ON (13) if received "ON"
// LED OFF (13) If received "OFF"
// Send a message if received "Read"

String Input_Appinventor_String = "";         // String to hold incoming App inventor Data 


const int ledPin = 13;
int Valeur = 0 ;

void setup() {
  Serial.begin(57600);
    // Pin 13 has an LED connected on most Arduino boards:
  pinMode(ledPin, OUTPUT);
  Input_Appinventor_String.reserve(200);
  delay(2000);
}

void loop() {
   
  delay(10);

}

void serialEvent() {
  while (Serial.available()) { 
   
    // Read incomming Control From App Inventor
    char inChar = (char)Serial.read(); 
    // add it to the Input_Appinventor_String:
    Input_Appinventor_String += inChar;

 
     if (Contains(Input_Appinventor_String ,"Read")){         // If App Inveor Control is "Read"
      Serial.println ("Message from Arduino");             // Send a message to App Invetor get result
      
      Input_Appinventor_String ="";
   }
      
  
      if (Contains(Input_Appinventor_String ,"ON")){            // If App Inveot Control is "ON"
      digitalWrite(ledPin, HIGH);                      // Led 13 On
      Input_Appinventor_String ="";}
      
      if (Contains(Input_Appinventor_String ,"OFF")){             // If App Inveot Control is "OFF"
      digitalWrite(ledPin, LOW);                        // Led 13 Off
      Input_Appinventor_String ="";}
   
  }
    
}

bool Contains( String s, String search) {
    int max = s.length() - search.length();  
    for (int i=0; i<= max; i++) 
    {
    if (s.substring(i) == search) return true;  // or i
    }
    return false;  //or -1
    }

