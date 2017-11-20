const int BLED = 10; //Red LED on pin 10
const int LIGHT = 0; //Light sensor on Analog pin 0
const int MIN_LIGHT = 200; //Minimum expected light value
const int MAX_LIGHT = 750; //Maximum expected light value
int val = 0; //variable to hold analog reading

void setup() {
  pinMode(BLED, OUTPUT); //Set LED as output

}

void loop() {
  val = analogRead(LIGHT); //Read the analog photoresistor value
  val = map(val, MIN_LIGHT, MAX_LIGHT, 255, 0);
  val = constrain(val, 0, 255); //set limit of max and min value
  
  analogWrite(BLED, val); //control the LED

}
