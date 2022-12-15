int i = 8;
const int pino_a = 12;
const int pino_b = 9;
const int pino_c = 10;
const int pino_d = 11;

char leitura_serial;

void setup() {
  Serial.begin(9600);
  while(i <= 12){
    pinMode(i, OUTPUT);
    i++;
   }
}

void loop() {
  if(Serial.available()>0){//Verifica se há algum byte na porta serial
    leitura_serial = Serial.read();//Armazena bytes da porta Serial
    Serial.println(leitura_serial);//Exibe o que foi armazenado
    leitura_serial = leitura_serial - 48;
//Number 0
      if(leitura_serial == 0){
          digitalWrite(pino_a, LOW);
          digitalWrite(pino_b, LOW);
          digitalWrite(pino_c, LOW);
          digitalWrite(pino_d, LOW);
      }
//Number 01
      if(leitura_serial == 1){
          digitalWrite(pino_a, HIGH);
          digitalWrite(pino_b, LOW);
          digitalWrite(pino_c, LOW);
          digitalWrite(pino_d, LOW);
      }
//Number 02
      if(leitura_serial == 2){
          digitalWrite(pino_a, LOW);
          digitalWrite(pino_b, HIGH);
          digitalWrite(pino_c, LOW);
          digitalWrite(pino_d, LOW);
      }
//Number 03        
      if(leitura_serial == 3){
          digitalWrite(pino_a, HIGH);
          digitalWrite(pino_b, HIGH);
          digitalWrite(pino_c, LOW);
          digitalWrite(pino_d, LOW);      
      }
//Number 04        
      if(leitura_serial == 4){
          digitalWrite(pino_a, LOW);
          digitalWrite(pino_b, LOW);
          digitalWrite(pino_c, HIGH);
          digitalWrite(pino_d, LOW);        
      }
//Number 05
      if(leitura_serial == 5){
          digitalWrite(pino_a, HIGH);
          digitalWrite(pino_b, LOW);
          digitalWrite(pino_c, HIGH);
          digitalWrite(pino_d, LOW);        
      }
//Number 06
      if(leitura_serial == 6){
          digitalWrite(pino_a, LOW);
          digitalWrite(pino_b, HIGH);
          digitalWrite(pino_c, HIGH);
          digitalWrite(pino_d, LOW);
      }
//Number 07
      if(leitura_serial == 7){
          digitalWrite(pino_a, HIGH);
          digitalWrite(pino_b, HIGH);
          digitalWrite(pino_c, HIGH);
          digitalWrite(pino_d, LOW);
      }
//Number 08
      if(leitura_serial == 8){
          digitalWrite(pino_a, LOW);
          digitalWrite(pino_b, LOW);
          digitalWrite(pino_c, LOW);
          digitalWrite(pino_d, HIGH);
      }
//Number 09
      if(leitura_serial == 9){
          digitalWrite(pino_a, HIGH);
          digitalWrite(pino_b, LOW);
          digitalWrite(pino_c, LOW);
          digitalWrite(pino_d, HIGH);  
      }
   }
}
