const int LEDR = 11;//LED RED
const int LEDG = 10;//LED GREEN
const int LEDB = 9;//LED BLUE
const int BtnR = 7;//Button LED red
const int BtnG = 6;//Button LED green
const int BtnB = 5;//Button LED blue
const int BtnA = 4;
const int pinoPotenciometro = A0;

//Variables to stock Button(s) value(s)
int readBtnR;
int readBtnG;
int readBtnB;
int readBtnA;
int leituraPotenciometro;
int pwmR = 0;
int pwmG = 0;
int pwmB = 0;

void setup() {
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(BtnR, INPUT_PULLUP);
  pinMode(BtnG, INPUT_PULLUP);
  pinMode(BtnB, INPUT_PULLUP);
  pinMode(BtnA, INPUT_PULLUP);
  pinMode(pinoPotenciometro, INPUT);
}

void loop() {
  //Read thte button(s) state(s)
  readBtnR = digitalRead(BtnR);
  readBtnG = digitalRead(BtnG);
  readBtnB = digitalRead(BtnB);
  readBtnA = digitalRead(BtnA);
  leituraPotenciometro = analogRead(pinoPotenciometro);
// Red
  if(readBtnR == LOW){
    if(readBtnA == LOW) {
      pwmR = map(leituraPotenciometro, 0, 1023, 0, 255);
      analogWrite(LEDR, pwmR); 
    }else {
      analogWrite(LEDR, 0);
    }
  }
// Green
  if(readBtnG == LOW){
    if(readBtnA == LOW) {
      pwmG = map(leituraPotenciometro, 0, 1023, 0, 255);
      analogWrite(LEDG, pwmG); 
    }else {
      analogWrite(LEDG, 0);
    }
  }
// Blue
  if(readBtnB == LOW){
    if(readBtnA == LOW) {
      pwmB = map(leituraPotenciometro, 0, 1023, 0, 255);
      analogWrite(LEDB, pwmB); 
    }else {
      analogWrite(LEDB, 0);
    }
  }
  delay(100);
}
