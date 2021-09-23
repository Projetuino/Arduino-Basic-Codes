const int pinoPIR = 2;

void setup() {
  Serial.begin(9600);
  pinMode(pinoPIR, INPUT);
}

void loop() {
  if (digitalRead(pinoPIR)) {
    Serial.println("Movimento Detectado");
  }
}
