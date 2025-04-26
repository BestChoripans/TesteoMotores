#include "variable.h"
const int freq = 5000; // la frecuencia bueno no pienso dar una explicacion de esto que flojera
const int resolution = 8; // con el resolution hacemos que el limite de valores sea de 8 bits (0-255) en vez de tener un limite de 16 bits (0-65,535) 

void setup() {
  motorSetup(); // llama a la funcion de motorSetup 
}

void loop() {
  motores(100, 100); // codigo para el movimiento de los motores
}
