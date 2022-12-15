const int LEDR = 11;//LED RED
const int LEDG = 10;//LED GREEN
const int LEDB = 9;//LED BLUE
const int BtnR = 7;//Button LED red
const int BtnG = 6;//Button LED green
const int BtnB = 5;//Button LED blue

//Variables to stock Button(s) value(s)
int readBtnR;
int readBtnG;
int readBtnB;

void setup() {
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(BtnR, INPUT_PULLUP);
  pinMode(BtnG, INPUT_PULLUP);
  pinMode(BtnB, INPUT_PULLUP);
}

void loop() {
  //Read thte button(s) state(s)
  readBtnR = digitalRead(BtnR);
  readBtnG = digitalRead(BtnG);
  readBtnB = digitalRead(BtnB);

//RED
  if(readBtnR == LOW){//Check the button state
    analogWrite(LEDR, 255);//Turn On the LED with MAX light
    }else{
    analogWrite(LEDR, 0);//Turn off
    }
//GREEN    
  if(readBtnG == LOW){//Check the button state
    analogWrite(LEDG, 255);//Turn On the LED with MAX light
    }else{
    analogWrite(LEDG, 0);//Turn off
    }
//BLUE
  if(readBtnB == LOW){//Check the button state
    analogWrite(LEDB, 255);//Turn On the LED with MAX light
    }else{
    analogWrite(LEDB, 0);//Turn off
    }
 delay(100);
}
