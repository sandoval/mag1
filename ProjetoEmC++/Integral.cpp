#include "Integral.h"

IntegralEuler::integrate(double a, double b)
{
    double x = a+intervalo;
    Ponto A = new Ponto(a, funcao(a));
    Ponto B = new Ponto(x, funcao(x));
    double integral = 0;
    Vetor vetor = new Vetor(A, B);
    
    for(x += intervalo; x < b; x += intervalo)
    {
        integral += vetor.sizeOfVetor();
        A = new Ponto(x, funcao(x));
        vetor.nextVetor(A);
    }
    
    //destroir as paradas

    
    return integral;
}
