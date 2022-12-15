//inclui a biblioteca que possui as funções do sensor DHT
#include "DHT.h"

const int pino_dht = 9;//Pino em que o sensor DHT está conectado
float temperatura;//Var para armazenar o valor da temperatura
float umidade;//Var para armazenar o valor da umidade

DHT dht(pino_dht, DHT11);//define o pino e o tipo de DHT

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  dht.begin();//inicializa o sensor DHT

}

void loop() {
  // aguarda um tempo entre uma leitura e outra
  delay(2000);//Datasheet

  //A leitura da temperatura ou da humidade pode levar 250ms
  //O atraso pode chegar até 2 segundos
  temperatura = dht.readTemperature();//lê a temperatura
  umidade = dht.readHumidity();//lê a umidade

  //Caso ocorra falhas na leitura
  if(isnan(umidade) || isnan(temperatura)){
    Serial.println("Falha na leitura!!!");
  }
  else{
    //Valores da Temperatura
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

}
