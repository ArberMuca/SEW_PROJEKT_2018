/* 
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  RF SOLUTIONS SAMPLE GAMMA TRANSMITTER MODE 8 CHANNELS
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
   
   toggles channels 1 > 8 with a 3 second delay between each 
  
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/

// DEFINE CHANNELS AND OPTION LINKS 
#define  CH1 2  // All channels are outputs on the Arduino when configured as a transmitter
#define  CH2 3
#define  CH3 4
#define  CH4 5
#define  CH5 6
#define  CH6 7
#define  CH7 8
#define  CH8 9

#define  OPT1  11 
#define  OPT2  10

void setup() {
  Serial.begin(19200);         // enable serial to see what button is pressed on a terminal program

  // put your setup code here, to run once:
  pinMode(2, OUTPUT);    // all outputs to control GAMMA-868 in TX Mode 
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);  

  digitalWrite(CH1, HIGH);    // defalt start values for all inputs on GAMMA   
  digitalWrite(CH2, HIGH);
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  digitalWrite(CH5, HIGH);
  digitalWrite(CH6, HIGH);
  digitalWrite(CH7, HIGH);
  digitalWrite(CH8, HIGH); 

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(CH1,  LOW);
     delay(1000);
  digitalWrite(CH1, HIGH);
     delay(1000);  
     Serial.println("next channel");
  digitalWrite(CH2,  LOW);
     delay(3000);
  digitalWrite(CH2, HIGH);
     delay(3000);
     
     Serial.println("next channel");
  digitalWrite(CH3,  LOW);
     delay(3000);
  digitalWrite(CH3, HIGH);
     delay(3000);
     
     Serial.println("next channel");
  digitalWrite(CH4,  LOW);
     delay(3000);
  digitalWrite(CH4, HIGH);
     delay(3000);
     
     Serial.println("next channel");
  digitalWrite(CH5,  LOW);
     delay(3000);
  digitalWrite(CH5, HIGH);
     delay(3000);
     
     Serial.println("next channel");
  digitalWrite(CH6,  LOW);
     delay(3000);
  digitalWrite(CH6, HIGH);
     delay(3000);
     
     Serial.println("next channel");
  digitalWrite(CH7,  LOW);
     delay(3000);
  digitalWrite(CH7, HIGH);
     delay(3000);
     
     Serial.println("next channel");
  digitalWrite(CH8,  LOW);
     delay(3000);
  digitalWrite(CH8, HIGH);
     delay(3000);   

}
