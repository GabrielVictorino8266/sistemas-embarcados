void setup() {
  // Configura pinos Output e Input
  pinMode(9, INPUT); // botão é definido como entrada
  pinMode(12, OUTPUT); // LED é definido como saída
}

void loop() {
  // condicional IF -> SE
  if(digitalread(9) == HIGH){ //se botão for pressionado (HIGH)
    digitalWrite(12, HIGH); //acende o LED
  }
  else{ //se botão não estiver pressionado (LOW)
    digitalWrite(12, LOW);//apaga o LED
  }
}
