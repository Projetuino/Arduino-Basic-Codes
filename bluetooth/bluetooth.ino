#include <SoftwareSerial.h>
SoftwareSerial bluetooth(3, 4);

const int pino = 2;

void setup() {
  bluetooth.begin(9600);
  pinMode(pino, OUTPUT);
}

void loop() {
  if (bluetooth.available() > 0) {
    digitalWrite(pino, (double)readBluetooth());
  }
}

double readBluetooth() {
  char bluetoothValue;
  String bluetoothString = "";
  while (bluetooth.available()) {
    bluetoothValue = bluetooth.read();
    bluetoothString += bluetoothValue;
  }
  return bluetoothString.toDouble();
}
