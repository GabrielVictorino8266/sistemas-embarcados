int i = 8;
const int pino_a = 12;
const int pino_b = 9;
const int pino_c = 10;
const int pino_d = 11;

void setup() {
  while(i <= 12){
    pinMode(i, OUTPUT);
    i++;
   }
}

void loop() {
 //Number 0
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  delay(1000);
//Number 01
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  delay(1000);
//Number 02
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  delay(1000);
//Number 03
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  delay(1000);
//Number 04
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  delay(1000);
//Number 05
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  delay(1000);
//Number 06
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  delay(1000);
//Number 07
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  delay(1000);
//Number 08
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, HIGH);
  delay(1000);
//Number 09
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, HIGH);
  delay(1000);
}
