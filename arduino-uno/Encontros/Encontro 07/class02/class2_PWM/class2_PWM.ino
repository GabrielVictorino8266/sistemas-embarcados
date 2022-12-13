
const int pinPOT = A0;//Potenciometer pin
const int LED = 11;//LED pin
int leitura = 0;//Var leitura to stock ADC value
int pwm = 0;//Var pwm to stock duty cycle value

void setup() {
  pinMode(pinPOT, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  //read the Voltage of potenciometer
  leitura = analogRead(pinPOT);
  
  //Convert POTENCIOMETER value, 0-1023 => 0-255
  pwm = map(leitura, 0, 1023, 0, 255);

  //update the duty cycle, LED variable intensity
  analogWrite(LED, pwm);
}
