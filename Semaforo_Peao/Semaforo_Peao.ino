int ledVermelhoCarro = 13;
int ledAmareloCarro = 12;
int ledVerdeCarro = 11;
int ledVerdePeao = 7;
int ledVermelhoPeao = 8;

void setup() {
   pinMode(ledVermelhoCarro,OUTPUT);
   pinMode(ledAmareloCarro,OUTPUT);
   pinMode(ledVerdeCarro,OUTPUT);
   pinMode(ledVerdePeao,OUTPUT);
   pinMode(ledVermelhoPeao,OUTPUT);
}

void loop() {
   digitalWrite(ledVerdePeao, LOW);
   digitalWrite(ledVerdeCarro, HIGH);
   digitalWrite(ledVermelhoPeao, HIGH);
   delay(5000);
   digitalWrite(ledVerdeCarro, LOW);
   for( int repete = 1; repete <= 5; repete ++){
    digitalWrite(ledAmareloCarro, HIGH);
    delay(500);
    digitalWrite(ledAmareloCarro, LOW);
    delay(500);
   }
   digitalWrite(ledVermelhoPeao, LOW);
   digitalWrite(ledVermelhoCarro, HIGH);
   digitalWrite(ledVerdePeao, HIGH);
   delay(5000);
   digitalWrite(ledVermelhoCarro, LOW);
}
