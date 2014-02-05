#define LED1 11
#define LED2 10
#define BUTTON1 3

int pressed = 0;
int i = 0;

void setup(){
  pinMode(LED1, OUTPUT);
  pinMode(BUTTON1, INPUT);
}

void loop() {
  
pressed = digitalRead(BUTTON1);  
  
  if ( pressed == HIGH ){
    i = i++;
    delay(100);
    if (i == 2) i = 0;
    
    if (i == 0) {
       analogWrite(LED1, 100);
       analogWrite(LED2, 0);
  }
  
    if (i == 1) {
       analogWrite(LED1, 0);
       analogWrite(LED2, 100);
    }
    
  }
      
}
