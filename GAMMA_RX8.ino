
// definition von alle Channels
#define  OP1 2  // Alle Channels sind INPUT, wenn sie als Reciever configuriert sind
#define  OP2 3
#define  OP3 4
#define  OP4 5
#define  OP5 6
#define  OP6 7
#define  OP7 8
#define  OP8 9


int StateChange = 0;           // Flag Wert

byte Inputs18 = B00000000;     // lösche alle Flag vor der Ausführung
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);            // INPUTS
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);

  Serial.begin(19200);         // Serial einschalten auf 19200 baut
}

void loop() {
  // put your main code here, to run repeatedly:
  // OUT 1 testen
  StateChange = bitRead(Inputs18, 0);  // Read last known state of output 1

  if ((digitalRead(OP1)) == HIGH) {
    if (StateChange == 0) {              // if output is high and has changed since last read then
      Serial.println("Output 1 HIGH");   // print text to serial terminal
      Serial.println("OP1 gelesen");
      bitSet(Inputs18, 0);               // change know state flag
    }
  }
  else  {
    if (StateChange == 1) {
      Serial.println("Output 1 LOW");
      bitClear(Inputs18, 0);
    }
  }


  // OUT 2 testen
  StateChange = bitRead(Inputs18, 1);  // Read last known state of output 2

  if ((digitalRead(OP2)) == HIGH) {
    if (StateChange == 0) {
      Serial.println("OP2 gelesen");
      Serial.println("Output 2 HIGH");
      bitSet(Inputs18, 1);
    }
  }
  else  {
    if (StateChange == 1) {
      Serial.println("Output 2 LOW");
      Serial.println("OP1 gelesen");

      bitClear(Inputs18, 1);
    }
  }


  // OUT 3 testen
  StateChange = bitRead(Inputs18, 2);  // Read last known state of output 3

  if ((digitalRead(OP3)) == HIGH) {
    if (StateChange == 0) {
      Serial.println("Output 3 HIGH");
      Serial.println("OP3 gelesen");

      bitSet(Inputs18, 2);
    }
  }
  else  {
    if (StateChange == 1) {
      Serial.println("Output 3 LOW");
      bitClear(Inputs18, 2);
    }
  }


  // OUT 4 testen
  StateChange = bitRead(Inputs18, 3);    // Read last known state of output 4

  if ((digitalRead(OP4)) == HIGH) {
    if (StateChange == 0) {
      Serial.println("Output 4 HIGH");
      Serial.println("OP4 gelesen");

      bitSet(Inputs18, 3);
    }
  }
  else  {
    if (StateChange == 1) {
      Serial.println("Output 4 LOW");
      bitClear(Inputs18, 3);
    }
  }

  StateChange = bitRead(Inputs18, 4);    // Read last known state of output 5

  if ((digitalRead(OP5)) == HIGH) {
    if (StateChange == 0) {
      Serial.println("Output 5 HIGH");
      Serial.println("OP5 gelesen");

      bitSet(Inputs18, 4);
    }
  }
  else  {
    if (StateChange == 1) {
      Serial.println("Output 5 LOW");
      bitClear(Inputs18, 4);
    }
  }

  StateChange = bitRead(Inputs18, 5);    // Read last known state of output 6

  if ((digitalRead(OP6)) == HIGH) {
    if (StateChange == 0) {
      Serial.println("Output 6 HIGH");
      Serial.println("OP6 gelesen");

      bitSet(Inputs18, 5);
    }
  }
  else  {
    if (StateChange == 1) {
      Serial.println("Output 6 LOW");
      bitClear(Inputs18, 5);
    }
  }

  StateChange = bitRead(Inputs18, 6);    // Read last known state of output 7

  if ((digitalRead(OP7)) == HIGH) {
    if (StateChange == 0) {
      Serial.println("Output 7 HIGH");
      Serial.println("OP8 gelesen");


      bitSet(Inputs18, 6);
    }
  }
  else  {
    if (StateChange == 1) {
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
    if (StateChange == 1) {
      Serial.println("Output 8 LOW");
      bitClear(Inputs18, 7);
    }
  }
  Serial.println( Inputs18);
}
