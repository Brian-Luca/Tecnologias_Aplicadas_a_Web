 /* 
O sinal está vermelho para o peão
Quando o peão carrega no botão: o LED vermelho depois de 2 segundos apaga o LED verde acende
LED verde fica acesso 3 segundos e depois apaga e volta a acender o vermelho
*/

int botao=4;
int ledVermelho=8;
int ledVerde=5;
int valorBotao=0;

void setup(){
   pinMode(botao,INPUT);
   pinMode(ledVermelho,OUTPUT);
   pinMode(ledVerde,OUTPUT);
   Serial.begin(9600);
}

void loop(){
   valorBotao=digitalRead(botao);
   Serial.print(valorBotao);
   if(valorBotao==LOW){
      delay(2000);
      digitalWrite(ledVermelho,LOW);
      digitalWrite(ledVerde,HIGH);
      delay(3000);
      digitalWrite(ledVermelho,HIGH);
      digitalWrite(ledVerde,LOW);
   }
  else{
      digitalWrite(ledVermelho,HIGH);
       digitalWrite(ledVerde,LOW);
   }
}
