// Example 02: Turn on LED while the button is pressed

#define LED 13 // LED is pin 13
#define BUTTON 7 // button is input 7
#define BLUE 12 

int val = 0; // used to store input state
int state = 0; // 0 = off, 1 = on
int old_val = 0; // stores previous value for val

void setup( ) {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  pinMode(BLUE, OUTPUT);
} 

void loop () {
  val = digitalRead(BUTTON);
  
  if ( (val == HIGH) && (old_val == LOW)) {
    state = 1 - state;
    delay (10);
  }
  
  old_val = val;
  
  if (state == 1) {
    digitalWrite(LED,HIGH);
    digitalWrite(BLUE, HIGH);
    
  }
  
  else {
    digitalWrite(LED, LOW);
    digitalWrite(BLUE, LOW);
  }

}
