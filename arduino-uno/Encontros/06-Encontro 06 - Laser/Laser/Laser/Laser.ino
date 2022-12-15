const int pinoLDR = A0; //LDR conectado
int leitura = 0;//armazena valor do ADC

void setup() {
  //inicia e configura serial
    Serial.begin(9600);
  //LDR vira entrada
    pinMode(pinoLDR, INPUT);//A0

}

void loop() {
  leitura = analogRead(pinoLDR);

  //imprime o valor lido pelo Arduino (0 a 1023)
  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t");//tabulacao

  //imprime se existe ou não um obstáculo
  Serial.print("Obstáculo: ");
  if(leitura < 512){
    Serial.print("Sim");
  }
  else {
    Serial.print("Não");
  }

  Serial.println();//nova linha

  delay(500);//aguardar para a próxima leitura

}
