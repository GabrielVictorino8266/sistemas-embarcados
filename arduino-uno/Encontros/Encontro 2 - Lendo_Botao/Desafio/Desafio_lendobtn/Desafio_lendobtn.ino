void setup()
{
  // Configura pinos Output e Input
  //INPUT
  pinMode(8, INPUT); // botão é definido como entrada
  pinMode(9, INPUT); // botão é definido como entrada
  //OUTPUT
  pinMode(3, OUTPUT); // LED é definido como saída
  pinMode(13, OUTPUT); // LED é definido como saída
}

void loop()
{
 //Primeiro Botão
  // condicional IF -> SE - Primeiro Botão
  if(digitalRead(9) == HIGH){ //se botão for pressionado (HIGH)
    digitalWrite(13, HIGH); //acende o LED
  }
  else{ //se botão não estiver pressionado (LOW)
    digitalWrite(13, LOW);//apaga o LED
  }

  //Segundo Botão
    // condicional IF -> SE
  if(digitalRead(8) == HIGH){ //se botão for pressionado (HIGH)
    digitalWrite(3, LOW); //acende o LED
  }
  else{ //se botão não estiver pressionado (LOW)
    digitalWrite(3, HIGH);//apaga o LED
  }
}
