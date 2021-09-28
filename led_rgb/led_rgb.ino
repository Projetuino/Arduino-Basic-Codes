const int pinoR = 9;
const int pinoG = 10;
const int pinoB = 11;
const int tempo_espera = 1000;
const int tempo_transicao = 2000;
int r_aux = 0;
int g_aux = 0;
int b_aux = 0;

void setup() {
  pinMode(pinoR, OUTPUT);
  pinMode(pinoG, OUTPUT);
  pinMode(pinoB, OUTPUT);
}

void loop() {
  cor(0, 0, 255); //azul
  cor(0, 255, 0); //verde
  cor(0, 255, 255); //ciano
  cor(255, 0, 0); //vermelha
  cor(255, 0, 255); //magenta
  cor(255, 255, 0); //amarela
  cor(255, 255, 255); //branca
}

void cor(int r, int g, int b) {
  for (int i = 0; i <= 255; i++) {
    analogWrite(pinoR, r_aux + ((r - r_aux) / 255)*i);
    analogWrite(pinoG, g_aux + ((g - g_aux) / 255)*i);
    analogWrite(pinoB, b_aux + ((b - b_aux) / 255)*i);
    delay(tempo_transicao / 255);
  }
  r_aux = r;
  g_aux = g;
  b_aux = b;
  delay(tempo_espera);
}
