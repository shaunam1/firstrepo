// the setup routine runs once when you press reset:
int LED=2;      //initialise variable for LED to correspond with Digital Port 2
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int knobValue = analogRead(A0);
  if (knobValue >= 400)
  {
    digitalWrite(LED, HIGH);  // turn the LED on (HIGH is the voltage level)
  
  }    
  else 
  {
    digitalWrite(LED, LOW);  // turn the LED on (HIGH is the voltage level)
  }
   // print out the value you read:
  Serial.println(knobValue);

}
