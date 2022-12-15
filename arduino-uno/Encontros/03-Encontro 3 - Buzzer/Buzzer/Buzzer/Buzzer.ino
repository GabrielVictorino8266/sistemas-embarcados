int frequencia = 2000; //declarando variável

void setup() {
  pinMode(10, OUTPUT);// buzzer como saída
}

void loop() {
  tone(10, frequencia); // usa a freuqencia de 2000hz
  delay(1000);
  noTone(10); //para a frequencia no buzzer
  delay(1000);
}
