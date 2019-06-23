/* 
O pin analógico A0 irá receber o valor da voltagem do divisor de tensão
Quando mais luz incidir no sensor menor será o valor da tensão e portanto menor o valor indicado pelo Arduino.
Quando menos luz incidir no sensor maior será o valor da tensão e portanto maior o valor indicado pelo Arduino
*/

int ledVerde = 13;
int ledVerme = 11;
int ledRelo = 12;


void setup() {
   Serial.begin(9600);
   pinMode(ledVerme,OUTPUT);
   pinMode(ledRelo,OUTPUT);
   pinMode(ledVerde,OUTPUT);
}
void loop() {
   int sensorValue = analogRead(A0);
   Serial.println(sensorValue);
   delay(10);

   if(sensorValue < 300){
     digitalWrite(ledVerde, HIGH);

     digitalWrite(ledVerme, LOW);

     digitalWrite(ledRelo, LOW);   
    }
     else if(sensorValue > 700){
     digitalWrite(ledVerme, HIGH);

     digitalWrite(ledVerde, LOW);

     digitalWrite(ledRelo, LOW);   
    }
    else{
     digitalWrite(ledRelo, HIGH);

     digitalWrite(ledVerme, LOW);

     digitalWrite(ledVerde, LOW);
    }
} 
    
