////////////////////////////////////////////////////////////////////////////
//
// LED-based UI Experiment (MSP-430FR4133)
//
// Brief: this is a fast and simple LED-based User Interface experiment.
//        
//
// UX:    The two on-board push buttons are used to invoke interaction with 
//        the two LEDs near them. The left button makes the red LED blink
//        four times, and the right button makes the green LED blink four 
//        times. Pressing both buttons at the same time causes both LEDs to
//        blink in a preprogrammed manner.
//
// Author: Ron Rihoo
//
////////////////////////////////////////////////////////////////////////////

// constants (setting pin numbers)
const int buttonPin1 = PUSH1;
const int buttonPin2 = PUSH2;
const int ledPinG = GREEN_LED;
const int ledPinR = RED_LED;

// variables (assigning state vars)
int button1_State = 0;         // variable for reading the pushbutton status
int button2_State = 0;
int button3_State = 0;
bool c = 1;
bool d = 1;
bool e = 1;

void setup() 
{
  // initialize outputs
  pinMode(ledPinG, OUTPUT);      
  pinMode(ledPinR, OUTPUT);
  
  // initialize inputs
  pinMode(buttonPin1, INPUT_PULLUP);     
  pinMode(buttonPin2, INPUT_PULLUP);
  
}

void loop(){
  // read state of push buttons
  button1_State = digitalRead(buttonPin1);
  button2_State = digitalRead(buttonPin2);
  button3_State = digitalRead(buttonPin1) && digitalRead(buttonPin2);

  // if button not pressed, then LED high
  // if button pressed, then LED low
  if (button1_State == HIGH) 
  {
      while (c == 0)
      {
        digitalWrite(ledPinR, LOW);
        digitalWrite(ledPinR, HIGH);
        delay(120);
        digitalWrite(ledPinR, LOW);
        delay(120);
        digitalWrite(ledPinR, HIGH);
        delay(100);
        digitalWrite(ledPinR, LOW);
        delay(100);
        digitalWrite(ledPinR, HIGH);
        delay(110);
        digitalWrite(ledPinR, LOW);
        delay(110);
        c = 1;
      }
    digitalWrite(ledPinR, HIGH);  
  } 
  if (button1_State == LOW)
  {   
    digitalWrite(ledPinR, LOW);
    c = 0;
  }
  
  if (button2_State == HIGH) 
  {
    while (d == 0)
    {
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinG, HIGH);
      delay(120);
      digitalWrite(ledPinG, LOW);
      delay(120);
      digitalWrite(ledPinG, HIGH);
      delay(100);
      digitalWrite(ledPinG, LOW);
      delay(100);
      digitalWrite(ledPinG, HIGH);
      delay(110);
      digitalWrite(ledPinG, LOW);
      delay(110);
      d = 1;
    }
    digitalWrite(ledPinG, HIGH);
  }
  else 
  {
    digitalWrite(ledPinG, LOW);
    d = 0;
  }
  
  if (button1_State == LOW and button2_State == LOW)
  {
    while (e == 0)
    {
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinR, LOW);
      delay(50);
      digitalWrite(ledPinG, HIGH);
      digitalWrite(ledPinR, LOW);
      delay(100);
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinR, HIGH);
      delay(100);
      digitalWrite(ledPinG, HIGH);
      digitalWrite(ledPinR, LOW);
      delay(100);
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinR, HIGH);
      delay(100);
      digitalWrite(ledPinG, HIGH);
      digitalWrite(ledPinR, LOW);
      delay(100);
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinR, HIGH);
      delay(100);
      digitalWrite(ledPinG, HIGH);
      digitalWrite(ledPinR, LOW);
      delay(100);
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinR, HIGH);
      delay(100);
      digitalWrite(ledPinG, HIGH);
      digitalWrite(ledPinR, LOW);
      delay(100);
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinR, HIGH);
      delay(100);
      digitalWrite(ledPinG, HIGH);
      digitalWrite(ledPinR, LOW);
      delay(100);
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinR, HIGH);
      delay(100);
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinR, LOW);
      delay(100);
      digitalWrite(ledPinG, HIGH);
      digitalWrite(ledPinR, HIGH);
      delay(100);
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinR, LOW);
      delay(100);
      digitalWrite(ledPinG, HIGH);
      digitalWrite(ledPinR, HIGH);
      delay(100);
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinR, LOW);
      delay(100);
      digitalWrite(ledPinG, HIGH);
      digitalWrite(ledPinR, HIGH);
      delay(100);
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinR, LOW);
      delay(100);
      e = 1;
      d = 1;
      c = 1;
    }
    
  }
  else
  {
    e = 0;
  }
  
  
}
