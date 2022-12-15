const int pino_buzzer = 11; //pino buzzer conectado

//Frequencias de cada nota musical
const int c = 261;//Dó
const int d = 293;//Ré
const int e = 329;//Mi
const int f = 349;//Fá
const int g = 391;//Sol
const int a = 440;//Lá
const int b = 493;//Si

void setup() {
  pinMode(pino_buzzer, OUTPUT);// buzzer saída
}

void loop() {
  La(500);  
  Re(300);
  Fa(250);
  Sol(250);
  La(200);
  Re(300);
  Fa(250);
  Sol(200);
  Mi(700);
  delay(200);
  Do(500);
  Fa(250);
  Mi(200);
  Sol(200);
  Do(500);
  Fa(200);
  Mi(200);
  Re(300);

//desliga o buzzer
  noTone(pino_buzzer);
  delay(2000);
}

void Do(int tempo){
  tone(pino_buzzer, c);
  delay(tempo);
}

void Re(int tempo){
  tone(pino_buzzer, d);
  delay(tempo);
}

void Mi(int tempo){
  tone(pino_buzzer, e);
  delay(tempo);
}

void Fa(int tempo){
  tone(pino_buzzer, f);
  delay(tempo);
}

void Sol(int tempo){
  tone(pino_buzzer, g);
  delay(tempo);
}

void La(int tempo){
  tone(pino_buzzer, a);
  delay(tempo);
}
  
void Si(int tempo){
  tone(pino_buzzer, b);
  delay(tempo);
}
