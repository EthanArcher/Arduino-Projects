
#define LED 9
#define LDR 0
#define BUZZER 11

int val = 0;
int brightness = 0;

void setup() {
  
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  
  val = analogRead(0);
  
  brightness = 1024 - val;
  
  Serial.println(brightness/4);
  
  analogWrite(LED, brightness/4) ;
  
  analogWrite(BUZZER, brightness/4) ;
  
  delay (100);
  
}
