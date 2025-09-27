#include "variable.h"
const int freq = 5000; // la frecuencia bueno no pienso dar una explicacion de esto que flojera
const int resolution = 8; // con el resolution hacemos que el limite de valores sea de 8 bits (0-255) en vez de tener un limite de 16 bits (0-65,535) 

void setup() {
  // aqui se hace la configuracion de los pines 
  // para el uso de los motores
  pinMode(BIN2  , OUTPUT);
  pinMode(BIN1  , OUTPUT);
  ledcSetup(1, freq, resolution);
  ledcAttachPin(PWMB, 1);
  pinMode(AIN1  , OUTPUT);
  pinMode(AIN2  , OUTPUT);
  ledcSetup(0, freq, resolution);
  ledcAttachPin(PWMA, 0);
}

void loop() {
  motores(100, 100); // codigo para el movimiento de los motores
  delay(500);
  motores(0,50);
  delay(500);
  motores(50,0);
}
