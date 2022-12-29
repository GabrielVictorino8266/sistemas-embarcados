# Hi, I'm Gabriel! See my project below  👋

## SENSOR DE LUZ | AULA 05

Você já parou para pensar como a iluminação das ruas é controlada? 
Desde 1794, no Rio de Janeiro, e 1830, em São Paulo, as ruas foram iluminadas por lampiões que utilizavam óleos vegetais e animais. Em 1854, 
São Paulo foi a primeira cidade a implantar a iluminação à gás. Até 1936, o 
controle da iluminação pública paulistana esteve a cargo da prefeitura, que 
contratava trabalhadores encarregados de acender e apagar os lampiões 
espalhados pela cidade. 
Atualmente, com o crescimento urbano e a introdução de novas tecnologias, não 
é mais necessário que pessoas façam esse trabalho, pois a iluminação urbana é 
automatizada. Isso foi possível pela implementação de sensores foto elétricos. 
O assunto será abordado neste encontro, que examina a automatização do 
acionamento de um LED com uma placa microcontrolada (Arduino).


### Sensores fotoelétricos
Resumidamente, um sensor fotoelétrico é um componente 
eletrônico que responde eletricamente às variações de intensidade de luz incidente. 
Um bom exemplo desse tipo de sensor são os LDRs ou LightDependent Resistor. Este componente varia sua resistência 
em função da intensidade da luz, respondendo com máxima 
resistência em situações de pouca luminosidade e mínima 
resistência em casos com alta luminosidade (guarde esta 
informação, pois ela será útil mais adiante).

### Divisor de tensão

Como as placas Arduino não medem resistência, pois a única 
coisa que conseguem interpretar é tensão, precisaremos usar 
um artifício para efetuar a leitura dos sensores. 
Para isso, usaremos o circuito 
divisor de tensão. Este circuito faz com que a tensão de entrada seja fracionada, permitindo que a leitura da tensão 
possa ser efetuada. 
Na imagem a seguir, podemos 
visualizar o esquemático do 
circuito divisor de tensão e 
como devemos montá-lo para 
usar um LDR. Repare que sem 
o resistor de 10kΩ a tensão no 
pino analógico seria sempre 
de 0V (GND), qualquer que 
fosse a resistência do LDR.

### Conversor A/D

Você já deve ter ouvido falar que aparelhos eletrônicos “só entendem 
1 e 0” ou ligado e desligado. Como a tensão de saída do circuito de 
divisor de tensão pode variar de 0 a 5 V, não podemos usar uma 
entrada digital do microcontrolador que lê somente 0 V (LOW) ou 5 
V (HIGH). Por isso, devemos ler esse sinal com uma entrada analógica 
do nosso Arduino.
As entradas analógicas são capazes de interpretar variações de 0 a 
5 V, pois são ligadas a conversores analógico-digitais (ADC). Estes, 
resumidamente, são circuitos que convertem as medidas do mundo 
real (leitura analógica) para valores que dispositivos eletrônicos 
entendem (leitura digital). Sua resolução é dada pelo número de bits. 
No caso da maioria das placas Arduino, suas entradas analógicas 
podem efetuar leituras de 10 bits, ou seja, 210=1024 divisões de 
0 a 5V. Isso significa que a menor variação que o Arduino consegue 
interpretar é de 0,005V

### 🛠 LISTA DE MATERIAIS
- 1 WORKPLATE PLACA ARDUINO BLACK + CABO USB
- 1 PROTOBOARD
- 1 SENSOR DE LUMINOSIDADE LDR 5MM
- 1 RESISTOR 10KΩ
- JUMPERS