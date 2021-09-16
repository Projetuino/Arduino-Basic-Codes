const int sensorTemp = A0;
int leitura;
void setup() {
  Serial.begin(9600);
}

void loop() {
  leitura = lerTemperatura(sensorTemp);
  Serial.println(leitura);
}

int lerTemperatura(int porta) {
  int aux = analogRead(porta);
  aux = map(aux, 20, 358, -40, 125);
  return aux;
}
