
// include the library code:
#include "Integral.h"
double leSerial();
void escreveSerial();
void integraEuler();
void integraverllet();
void integrakutta();

void setup() {
}

void loop()
{
  double opc = leSerial
    if(opc == 1)
  {
    integraeuler();
  }
  if(opc == 2)
  {
    integraverllet();
  }
  if(opc == 1)
  {
    integrakutta();
  }
}

void integraEuller()
{
  double intervalo = leSerial();
  double a = leSerial();
  double b = leSerial();
  double tempo = 0;

  //inicia contagem
  IntegralEuler integra = new IntegralEuler(intervalo);
  double result = integrate(a, b);

  //finaliza contagem

  //
  escreveSerial(result);
  escreveSerial(tempo);
}


