// Fade an LED

#define LED 9 // define LED pin

int brightness = 0;

  void setup () {
    pinMode(LED, OUTPUT);
  }                            // close setup

  void loop () {
    for (brightness = 0; brightness < 255; brightness++) {
      analogWrite(LED, brightness);
      delay(10);
      
    }
    
    for (brightness = 255; brightness > 0; brightness --) {
      analogWrite(LED, brightness);
      delay(10);
    }
    
  }                          // close loop
    


