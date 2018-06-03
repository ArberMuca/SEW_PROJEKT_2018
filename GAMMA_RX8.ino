/* 
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  RF SOLUTIONS SAMPLE GAMMA RECEIVER MODE 8 CHANNELS
  WEB SITE : http://www.rfsolutions.co.uk
 
  Address:
  	William Alexander House
	William Way, Burgess Hill, West Sussex
	RH15 9AG
	+44 (0)1444 227900
	(01444) 227900 
 
  Code by: AB
  Date:    11/05/2015
  
  SAMPLE CODE
   When a channel is pressed on a GAMMA TX the channel is displayed on a terminal program 
   baud rate 19200
     
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/

// DEFINE CHANNELS AND OPTION LINKS 
#define  OP1 2  // All channels are inputs on the Arduino when configured as a RECEIVER
#define  OP2 3
#define  OP3 4
#define  OP4 5
#define  OP5 6
#define  OP6 7
#define  OP7 8
#define  OP8 9

  
  int StateChange = 0;           // state change flag value 
  
  byte Inputs18 = B00000000;     // Clear all inputs flags before use  
  
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);            // all outputs to control BRAVO in TX Mode 
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  
  Serial.begin(19200);         // enable serial to see what button is pressed on a terminal program
}

void loop() {
  // put your main code here, to run repeatedly:
// Test output 1 
  StateChange = bitRead(Inputs18, 0);  // Read last known state of output 1
  
if ((digitalRead(OP1)) == HIGH) {      
    if (StateChange == 0) {              // if output is high and has changed since last read then 
      Serial.println("Output 1 HIGH");   // print text to serial terminal
      bitSet(Inputs18, 0);               // change know state flag
    }
  }
else  {
    if (StateChange == 1){
      Serial.println("Output 1 LOW");
      bitClear(Inputs18, 0);
    }  
  }


// Test output 2
  StateChange = bitRead(Inputs18, 1);  // Read last known state of output 2
  
if ((digitalRead(OP2)) == HIGH) { 
    if (StateChange == 0) {
      Serial.println("Output 2 HIGH");
      bitSet(Inputs18, 1);
    }
  }
else  {
    if (StateChange == 1){
      Serial.println("Output 2 LOW");
      bitClear(Inputs18, 1);
    }  
  }


// Test output 3
  StateChange = bitRead(Inputs18, 2);  // Read last known state of output 3
  
if ((digitalRead(OP3)) == HIGH) { 
    if (StateChange == 0) {
      Serial.println("Output 3 HIGH");
      bitSet(Inputs18, 2);
    }
  }
else  {
    if (StateChange == 1){
      Serial.println("Output 3 LOW");
      bitClear(Inputs18, 2);
    }  
  }


// Test output 4
  StateChange = bitRead(Inputs18, 3);    // Read last known state of output 4 
  
if ((digitalRead(OP4)) == HIGH) { 
    if (StateChange == 0) {          
      Serial.println("Output 4 HIGH");
      bitSet(Inputs18, 3);
    }
  }
else  {
    if (StateChange == 1){
      Serial.println("Output 4 LOW");
      bitClear(Inputs18, 3);
    }  
  }
  
   StateChange = bitRead(Inputs18, 4);    // Read last known state of output 5  
  
  if ((digitalRead(OP5)) == HIGH) { 
    if (StateChange == 0) {          
      Serial.println("Output 5 HIGH");
      bitSet(Inputs18, 4);
    }
  }
else  {
    if (StateChange == 1){
      Serial.println("Output 5 LOW");
      bitClear(Inputs18, 4);
    }  
  }
  
    StateChange = bitRead(Inputs18, 5);    // Read last known state of output 6 
  
  if ((digitalRead(OP6)) == HIGH) { 
    if (StateChange == 0) {          
      Serial.println("Output 6 HIGH");
      bitSet(Inputs18, 5);
    }
  }
else  {
    if (StateChange == 1){
      Serial.println("Output 6 LOW");
      bitClear(Inputs18, 5);
    }  
  }
  
    StateChange = bitRead(Inputs18, 6);    // Read last known state of output 7 
  
  if ((digitalRead(OP7)) == HIGH) { 
    if (StateChange == 0) {          
      Serial.println("Output 7 HIGH");
      bitSet(Inputs18, 6);
    }
  }
else  {
    if (StateChange == 1){
      Serial.println("Output 7 LOW");
      bitClear(Inputs18, 6);
    }  
  }
  
      StateChange = bitRead(Inputs18, 7);    // Read last known state of output 7
  
  if ((digitalRead(OP8)) == HIGH) { 
    if (StateChange == 0) {          
      Serial.println("Output 8 HIGH");
      bitSet(Inputs18, 7);
    }
  }
else  {
    if (StateChange == 1){
      Serial.println("Output 8 LOW");
      bitClear(Inputs18, 7);
    }  
  }

}