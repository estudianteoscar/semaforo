// Definición de pines para los LEDs
const int PIN_ROJO = 13;
const int PIN_AMARILLO = 12;
const int PIN_VERDE = 11;

void setup() {
  // Configuración de los pines como salidas
  pinMode(PIN_ROJO, OUTPUT);
  pinMode(PIN_AMARILLO, OUTPUT);
  pinMode(PIN_VERDE, OUTPUT);
}

void loop() {
  // Fase 1: Luz Roja
  encenderLuzRoja();
  delay(6000);  // Esperar 6 segundos

  // Fase 2: Luz Amarilla
  encenderLuzAmarilla();
  delay(2000);  // Esperar 2 segundos

  // Fase 3: Luz Verde
  encenderLuzVerde();
  delay(4000);  // Esperar 4 segundos
}

void encenderLuzRoja() {
  digitalWrite(PIN_ROJO, HIGH);
  digitalWrite(PIN_AMARILLO, LOW);
  digitalWrite(PIN_VERDE, LOW);
}

void encenderLuzAmarilla() {
  digitalWrite(PIN_ROJO, LOW);
  digitalWrite(PIN_AMARILLO, HIGH);
  digitalWrite(PIN_VERDE, LOW);
}

void encenderLuzVerde() {
  digitalWrite(PIN_ROJO, LOW);
  digitalWrite(PIN_AMARILLO, LOW);
  digitalWrite(PIN_VERDE, HIGH);
}


