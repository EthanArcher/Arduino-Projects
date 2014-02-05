#define GREEN 11
#define BLUE 10
#define RED 9
#define GREENBUTTON 4
#define REDBUTTON 3
#define BLUEBUTTON 2
#define OFF 5

int blueval = 0;
int greenval = 0;
int redval = 0;
int off = 0;

int i = 0;
int j = 0;
int k = 0 ;


void setup () {
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREENBUTTON, INPUT);
  pinMode(BLUEBUTTON, INPUT);
  pinMode(REDBUTTON, INPUT); 
  pinMode(OFF, INPUT);
}

void loop() {
  
greenval = digitalRead(GREENBUTTON);
blueval = digitalRead (BLUEBUTTON);
redval = digitalRead (REDBUTTON);
off = digitalRead(OFF);

if (greenval == HIGH) {
    i = i++;
    delay(10);
    
    if (i == 255) {
      i = 0;
    }
    
    analogWrite(GREEN, i);
  }
  
if (blueval == HIGH) {
    j = j++;
    delay(10);
    
    if (j == 255) {
      j = 0;
    }
    
    analogWrite(BLUE, j);
  }
  
  
 if (redval == HIGH) {
    k = k++;
    delay(10);
    
    if (k == 255) {
      k = 0;
    }
    
    analogWrite(RED, k);
  }
   
if ((greenval == HIGH) && (redval == HIGH) && (blueval == HIGH)){
  digitalWrite(GREEN, LOW);
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);
  delay(100);
  i = 0;
  j = 0;
  k = 0;

}

if (off == HIGH){
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(RED, LOW);
  delay(100);
  i = 0;
  j = 0;
  k = 0;

}

}


