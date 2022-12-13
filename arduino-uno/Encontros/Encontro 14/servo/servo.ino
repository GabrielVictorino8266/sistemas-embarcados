/*#include <Servo.h>//Inclui a biblioteca para servo motores

Servo servo_motor;//Cria um objeto para o cotnrole do servo

void setup() {
  servo_motor.attach(9);//Qual pino será usado para o servo declarado
  servo_motor.write(10);//Informa ao servo que deverá posicionar a 10 graus

}

void loop() {
  // put your main code here, to run repeatedly:

}*/

#include <Servo.h>//Inclui a biblioteca para servo motores

const int pot = A5;
int leitura;

Servo servo_motor;//Cria um objeto para o cotnrole do servo

void setup() {
  pinMode(pot, INPUT);
  servo_motor.attach(9);//Qual pino será usado para o servo declarado

}

void loop() {
  leitura = analogRead(pot);
    leitura = map(leitura,0,1023,10,170);//Ajusta o servo pelo potenciômetro

    servo_motor.write(leitura);//Informa ao servo a posição de leitura

    delay(100);

}
