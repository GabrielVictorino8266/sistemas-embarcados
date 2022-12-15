void setup()
{
  // Configura pinos Output e Input
  //INPUT
  pinMode(8, INPUT); // botão é definido como entrada
  //OUTPUT
  pinMode(10, OUTPUT); // LED é definido como saída
  pinMode(13, OUTPUT); // LED é definido como saída
}

void loop()
{
  // condicional IF -> SE 
  /*
  Se botão for pressionado (HIGH), acende o LED1 e apaga o LED2, caso contrário,
  se for solto (LOW), apaga o LED1 e acende o LED2
  */
  if(digitalRead(8) == HIGH){
    digitalWrite(13, HIGH); //acende o LED    
    digitalWrite(10, LOW); //acende o LED
  }
  else{ //se botão não estiver pressionado (LOW)
    digitalWrite(13, LOW);//apaga o LED
    digitalWrite(10, HIGH);//apaga o LED  
  }
}
