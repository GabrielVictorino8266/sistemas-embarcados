const int pinPot = A0;//Potencimeter conected
const int LED = 13;//LED conected
const int period = 1023;
int time_on, time_off; //Var to stock ADC value

void setup() {
  pinMode(pinPot, INPUT);//Potenciometer as INPUT
  pinMode(LED, OUTPUT);//pin LED as OUTPUT
  Serial.begin(9600);//Start Monitor Serial

}

void loop() {
  time_on = analogRead(pinPot);//Read 
  time_off = period - time_off;//Set the var time_off, how much time pin LED must be LOW

  digitalWrite(LED, HIGH);
  delay(time_on);
  digitalWrite(LED, LOW);
  delay(time_off);
  Serial.print(time_on);
  Serial.print("\t");
  Serial.print(time_off);
}
