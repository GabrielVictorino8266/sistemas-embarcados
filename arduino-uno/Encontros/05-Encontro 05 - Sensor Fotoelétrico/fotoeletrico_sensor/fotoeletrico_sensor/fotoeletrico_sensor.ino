const int pinoLDR = A0;// LDR conectado
int leitura = 0;//armazena o valor lido pelo ADC
float tensao = 0.0; //variavel que armazena a tensão

void setup() {
  //inicia o Serial
  Serial.begin(9600); //9600bps

  //configura o pino com LDR como entrada
  pinMode(pinoLDR, INPUT);//pino A0
}

void loop() {
  // le o valor da tensão do LDR
  leitura = analogRead(pinoLDR);

  //Imprime valor lido pelo arduino (0 a 1023)
  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t"); // tabulação

  //converte e imprime o valor em tensão elétrica
  tensao = leitura * 5.0 / 1023.0;
  Serial.print("Tensao: ");
  Serial.print(tensao);
  Serial.print("V");

  Serial.println(); // nova linha
  delay(1000);// espera 1 segundo(s)

}
