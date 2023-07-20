int led_red = 7; // the red LED is connected to Pin 7 of the Arduino

void setup() {
  // set up all the LEDs as OUTPUT
  pinMode(led_red, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_red, OUTPUT);

   
}

void loop() {
  // turn some LED on and off the other LEDs 
  digitalWrite(led_red, HIGH);  
  digitalWrite(led_red, LOW);
  digitalWrite(led_red, LOW);
  digitalWrite(led_red, LOW);
  digitalWrite(led_red, LOW);
  delay(500);  // wait 0,5 seconds
  
  digitalWrite(led_red, LOW);  
  digitalWrite(led_red, HIGH);
  digitalWrite(led_red, LOW);
  digitalWrite(led_red, LOW);
  digitalWrite(led_red, LOW);
  delay(500);  // wait 0,5 seconds
  
  digitalWrite(led_red, LOW);  
  digitalWrite(led_red, LOW);
  digitalWrite(led_red, HIGH);
  digitalWrite(led_red, LOW);
  digitalWrite(led_red, LOW);
  delay(500);  // wait 0,5 seconds
  
  digitalWrite(led_red, LOW);  
  digitalWrite(led_red, LOW);
  digitalWrite(led_red, LOW);
  digitalWrite(led_red, HIGH);
  digitalWrite(led_red, LOW);
  delay(500);  // wait 0,5 seconds
  
  digitalWrite(led_red, LOW);  
  digitalWrite(led_red, LOW);
  digitalWrite(led_red, LOW);
  digitalWrite(led_red, LOW);
  digitalWrite(led_red, HIGH);
  delay(500);  // wait 0,5 seconds
}