const int pinoLDR = A0;// LDR conectado
const int pinoLED = 7;// LED pino
int leitura = 0;//armazena o valor lido pelo ADC

void setup() {
  //configura o pino com LDR como entrada
  pinMode(pinoLDR, INPUT);//pino A0
  //Pino de saída do LED
  pinMode(pinoLED, OUTPUT);//pino 7
}

void loop() {
  // le o valor da tensão do LDR
  leitura = analogRead(pinoLDR);

 if(leitura < 40){
  digitalWrite(pinoLED, HIGH);//acende o LED
 }
  else{
    digitalWrite(pinoLED, LOW);
  }
  delay(100);
}
