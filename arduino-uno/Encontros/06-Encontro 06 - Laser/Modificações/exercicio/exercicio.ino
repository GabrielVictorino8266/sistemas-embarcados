//Pinos dos componentes
const int pinoLDR = A0;
const int pinoBuzzer = 9;
const int pinoBotao = 8;

//Variáveis gerais
int leituraLDR = 0;//armazena valor do ADC
int leituraBotao;
int qtde = 0;

void setup() {
    Serial.begin(9600);//inicia o serial
  //Configura os pinos
    pinMode(pinoLDR, INPUT);//A0
    pinMode(pinoBuzzer, OUTPUT);
    pinMode(pinoBotao, INPUT_PULLUP);
}

void loop() {
  //le a tensao do LDR
  leituraBuzzer = analogRead(pinoLDR);
  //le o estado do botao
  leituraBotao = digitalRead(pinoBotao);

  //Se houver um obstáculo
  if(leituraLDR < 512){
    tone(pinoBuzzer, 1000);//liga o buzzer
    qtde++;
    Serial.print("Quantidade de obstáculos: ");
    Serial.print(qtde);
  }
  else if(leituraBotao == LOW){//senão e o botao estiver pressionado
    noTone(pinoBuzzer);//desliga buzzer
    qtde = 0;
  }
  //Serial.println();
  delay(100);//aguardar para a próxima leitura
}
