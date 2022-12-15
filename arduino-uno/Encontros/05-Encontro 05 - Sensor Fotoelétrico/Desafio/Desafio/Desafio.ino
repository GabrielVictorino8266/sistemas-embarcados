const int pinoLDR = A0;// LDR conectado
const int LEDgreen = 7;
const int LEDyellow = 8; 
const int LEDred = 9; 
int leitura = 0;//armazena o valor lido pelo ADC

void setup() {
  //Inicia o SERIAL
    Serial.begin(9600);
  
  //configura o pino com LDR como entrada
    pinMode(pinoLDR, INPUT);//pino A0
  
  //Pino de saída do LED
    pinMode(LEDgreen, OUTPUT);//pino 7
    pinMode(LEDyellow, OUTPUT);//pino 8
    pinMode(LEDred, OUTPUT);//pino 9
}

void loop() {
  // le o valor da tensão do LDR
  leitura = analogRead(pinoLDR);

 if(leitura < 80){
  digitalWrite(LEDgreen, HIGH);//acende o LED 
 }
  else{
    digitalWrite(LEDgreen, LOW);
 }
  //****condicao 2
  if(leitura > 200){
  digitalWrite(LEDyellow, HIGH);//acende o LED
 }
  else{
    digitalWrite(LEDyellow, LOW);
 }
  //****condicao 3
  if(leitura < 350){
  digitalWrite(LEDred, HIGH);//acende o LED   
 }
  else{
    digitalWrite(LEDred, LOW);
 }
 
  imprimir();//Imprime os valores
  delay(100);
}

void imprimir() {
Serial.print("Leitura: ");
Serial.print(leitura);
Serial.println();
}

/*
 * 
 * 
 * 
 const int pinoLDR = A0;// LDR conectado
const int LEDgreen = 7;
const int LEDyellow = 8; 
const int LEDred = 9; 
int leitura = 0;//armazena o valor lido pelo ADC

void setup() {
  //Inicia o SERIAL
    Serial.begin(9600);
  
  //configura o pino com LDR como entrada
    pinMode(pinoLDR, INPUT);//pino A0
  
  //Pino de saída do LED
    pinMode(LEDgreen, OUTPUT);//pino 7
    pinMode(LEDyellow, OUTPUT);//pino 8
    pinMode(LEDred, OUTPUT);//pino 9
}

void loop() {
  // le o valor da tensão do LDR
  leitura = analogRead(pinoLDR);

 if(leitura < 80){
  digitalWrite(LEDgreen, HIGH);//acende o LED
  digitalWrite(LEDred, LOW); 
  digitalWrite(LEDyellow, LOW);
   
 }
  //****condicao 2
  if(leitura > 80 && leitura < 200){
  digitalWrite(LEDyellow, HIGH);//acende o LED
  digitalWrite(LEDred, LOW);
  digitalWrite(LEDgreen, LOW);
  } else if(leitura > 200 && leitura < 300){//3 condicao
  digitalWrite(LEDred, HIGH);//acende o LED 
  digitalWrite(LEDyellow, LOW);
  digitalWrite(LEDgreen, LOW);
  }
 
  imprimir();//Imprime os valores
  delay(100);
}

void imprimir() {
Serial.print("Leitura: ");
Serial.print(leitura);
Serial.println();
}

*/
 */
