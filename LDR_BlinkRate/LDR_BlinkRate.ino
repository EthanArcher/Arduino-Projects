#define LED 13

int val = 0; // variable from sensor

void setup() {
  pinMode(LED, OUTPUT);
  
}

void loop () {
  
  val = analogRead(0);
  
  digitalWrite(LED, HIGH);
  
  delay(val); // delay flash depending on light avlue in
  
  digitalWrite(LED, LOW);
  
  delay(val);
  
}
