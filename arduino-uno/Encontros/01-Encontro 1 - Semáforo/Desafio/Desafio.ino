void setup() {
  // Configura os pinos ddos LEDs como saída
  pinMode(11, OUTPUT); //LED Verde
  pinMode(12, OUTPUT); //LED Amarelo
  pinMode(13, OUTPUT); //LED Vermelho
  pinMode(1, OUTPUT);  //LED Vermelho pedestre
  pinMode(2, OUTPUT); //LED Verde pedestre

}

void loop() {
  // Sinal aberto: apaga o LED Vermelho, acende Verde
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  //Sinal Fechado para Pedestres
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    delay(3000); // Espera 3 segundo(s)

  //Sinal fechado: apaga Verde, abre Amarelo
    digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  //Sinal Aberto para pedestres
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    delay(2000); // Espera 2 segundo(s)

  //Sinal fechado: apaga Amarelo e acende Vermelho
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  //Sinal Aberto para Pedestres
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    delay(5000); // Espera 5 segundo(s)
}
