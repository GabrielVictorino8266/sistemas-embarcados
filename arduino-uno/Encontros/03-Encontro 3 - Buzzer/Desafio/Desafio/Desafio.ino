int frequencia = 2000; //declarando a frquência inicial do buzzer
const int pinoBuzzer = 10;//buzzer conectado
const int pinoBotao1 = 9;//botão 1 conectado
const int pinoBotao2 = 11; //botão 2 conectado

void setup() {
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoBotao1, INPUT_PULLUP);
  pinMode(pinoBotao2, INPUT_PULLUP);
  
  //INPUT_PULLUP habilita um resistor de 5V no chip (interno), pressionando o botão o valor é LOW.
}

void loop() {
  // Soma 100 da frequência atual se o botão estiver pressionado
  if(digitalRead(pinoBotao1) == LOW){
    frequencia = frequencia + 100;
  }
  
  if(digitalRead(pinoBotao2) == LOW){
    frequencia = frequencia - 100;
  }
  // Subtrai 100 da frequência atual se o botão estiver pressionado
  tone(pinoBuzzer, frequencia); //gera frequencia no Buzzer
  delay(1000);
  noTone(pinoBuzzer);//para frequencia no Buzzer
  delay(1000);
}
