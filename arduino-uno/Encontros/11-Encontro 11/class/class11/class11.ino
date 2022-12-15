//#include <DHT.h>
//#include <DHT_U.h>

#include "DHT.h"

//Define os pinos dos componentes
const int pino_dht = 9;//pino do sensor DHT
const int pinLEDR = 11;//Led RGB (red)
const int pinLEDG = 12;//Led RGB (green)
const int pinLEDB = 13;//Led RGB (blue)
const int pinobuzzer = 10;//buzzer

//Variáveis para armazenar temperatura e umidade
float temperatura;
float umidade;

DHT dht(pino_dht, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();

  //Configurando os pinos
  pinMode(pinLEDR, OUTPUT);
  pinMode(pinLEDG, OUTPUT);
  pinMode(pinLEDB, OUTPUT);
  pinMode(pinobuzzer, OUTPUT);

}

void loop() {
  //Tempo de espera entre leituras
  delay(200);
  temperatura = dht.readTemperature();
  umidade = dht.readHumidity();

  //Caso ocorra falhas
  if (isnan(umidade) || isnan(temperatura)) {
    //Acende branco
    digitalWrite(pinLEDR, HIGH);  
    digitalWrite(pinLEDG, HIGH);  
    digitalWrite(pinLEDB, HIGH);
  }
  else{
    if(temperatura > 23 || temperatura < 20){
      //Acende vermelho e aciona o buzzer a 2000Hz
      digitalWrite(pinLEDR, HIGH);  
      digitalWrite(pinLEDG, LOW);  
      digitalWrite(pinLEDB, LOW);  
      tone(pinobuzzer, 2000);
      delay(1000);
   }
   else if(temperatura > 35 || temperatura < 30){
    //Acendde azul e ativa buzzer a 1000Hz
      digitalWrite(pinLEDR, LOW);  
      digitalWrite(pinLEDG, LOW);  
      digitalWrite(pinLEDB, HIGH);  
      tone(pinobuzzer, 1000);
      delay(1000);
   }
   else{
   //Acende Verde
      digitalWrite(pinLEDR, LOW);  
      digitalWrite(pinLEDG, HIGH);  
      digitalWrite(pinLEDB, LOW);
   }

  
   //Turn off buzzer
   noTone(pinobuzzer);
  }
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.print(" ºC ");

    Serial.print("\t");

    //Valores da Umidade
    Serial.print("Umidade: ");
    Serial.print(umidade);
    Serial.print("%\t");
    Serial.println();
}
