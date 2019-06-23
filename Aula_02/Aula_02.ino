int ledVermelho = 13;
int ledAmarelo = 12;
int ledVerde = 11;
void setup() {
   pinMode(ledVermelho,OUTPUT);
   pinMode(ledAmarelo,OUTPUT);
   pinMode(ledVerde,OUTPUT);
}

void loop() {
   digitalWrite( ledVerde, HIGH);
   delay(5000);
   digitalWrite(ledVerde, LOW);
   for( int repete = 1; repete <= 5; repete ++){
    digitalWrite(ledAmarelo, HIGH);
    delay(500);
    digitalWrite(ledAmarelo, LOW);
    delay(500);
    printf(repete);
   }
   digitalWrite(ledVermelho, HIGH);
   delay(5000);
   digitalWrite(ledVermelho, LOW);
}
