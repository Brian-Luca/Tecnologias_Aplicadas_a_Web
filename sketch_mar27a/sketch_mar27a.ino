// Controlar um LED através da saída digital

int LED = 13; // Associa o pino 13 a variavel LED

void setup() {
  pinMode(LED, OUTPUT); // Define o pino 13 como saída
}

void loop() {
  digitalWrite(LED, HIGH); // Põe nível 1 no pino 13 (acende o LED)
  delay(2000); // Aguarda 2 segundos
  digitalWrite(LED, LOW); // Põe nível 0 no pino 13 (apaga o LED)
  delay(2000);
}
