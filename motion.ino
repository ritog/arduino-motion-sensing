/*
* Code for detecting motion using an HC-SR501 PIR sensor and Arduino Uno
* by Ritobrata Ghosh
* 01-Oct-2023
*/


#define LED_PIN 12                // pin 12 of Arduino for the LED light
#define INPUT_PIN 8               // pin 8 for PIR sensor
 
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the pin status
 
void setup() {
  pinMode(LED_PIN, OUTPUT);      // declare LED as output
  pinMode(INPUT_PIN, INPUT);     // declare sensor as input
 
  Serial.begin(9600);
}
 
void loop() {
  unsigned long timestamp = millis() / 1000;        // read time in seconds
  val = digitalRead(INPUT_PIN;                      // read input value
  
  if (val == HIGH)                                  // check if the input is HIGH
  {            
    digitalWrite(LED_PIN, HIGH;                     // turn LED ON
	
    if (pirState == LOW) {
      Serial.println("Motion detected!");           // print on output change
      Serial.print("Timestamp (in seconds): ");
      Serial.println(timestamp);

      pirState = HIGH;
    }
  } 
  else {
    digitalWrite(LED_PIN, LOW);                  // turn LED OFF
	
    if (pirState == HIGH) {
      Serial.println("Motion ended!");          // print on output change
      pirState = LOW;
    }
  }
}
