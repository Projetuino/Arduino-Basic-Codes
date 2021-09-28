const int vermelho = 9;
const int azul = 11;
const int verde = 10;
const int tempo = 1000;
const int tempo_transicao = 2000;
int vermelho_anterior = 0;
int azul_anterior = 0;
int verde_anterior = 0;

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  cor(0, 0, 0);
  delay(tempo);
  cor(0, 0, 255);
  delay(tempo);
  cor(0, 255, 0);
  delay(tempo);
  cor(0, 255, 255);
  delay(tempo);
  cor(255, 0, 0);
  delay(tempo);
  cor(255, 0, 255);
  delay(tempo);
  cor(255, 255, 0);
  delay(tempo);
  cor(255, 255, 255);
  delay(tempo);
}

void cor(int red, int green, int blue) {
  for (int i = 0; i <= 255; i++) {
    analogWrite(vermelho, vermelho_anterior + ((red - vermelho_anterior) / 255)*i);
    analogWrite(azul, azul_anterior + ((blue - azul_anterior) / 255)*i);
    analogWrite(verde, verde_anterior + ((green - verde_anterior) / 255)*i);
    delay(tempo_transicao / 255);
  }
  vermelho_anterior = red;
  azul_anterior = blue;
  verde_anterior = green;
}
