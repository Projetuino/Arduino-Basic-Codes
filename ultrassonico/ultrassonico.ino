const int pino_trigger = 2;
const int pino_echo = 3;
float distancia;
long tempo;
 
void setup()
{
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
  pinMode(pino_trigger, OUTPUT);
  pinMode(pino_echo, INPUT);
}
 
void loop()
{
  enviarSinal();
  distancia = calcularDistancia();
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  delay(500);
}

void enviarSinal(){
  digitalWrite(pino_trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(pino_trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pino_trigger, LOW);
}

float calcularDistancia(){
  tempo = pulseIn(pino_echo, HIGH);
  return tempo * 0.034 / 2;
}
