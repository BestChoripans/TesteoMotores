// Codigo de base para generar señales PWM
#include "variable.h"
const int freq = 5000;
const int resolution = 8;

void setup() {
  motorSetup();
}

void loop() {
  // put your main code here, to run repeatedly:
  motores(100, 100); // avanzar testeo
}
