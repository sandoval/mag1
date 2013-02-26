#include "Integral.h"

double IntegralEuler::integrate(double a, double b)
{
    double x = a+intervalo;
    Ponto *A = new Ponto(a, funcao(a));
    Ponto *B = new Ponto(x, funcao(x));
    double integral = 0;
    Trapesio *vetor = new Trapesio(A, B);
    
    for(x += intervalo; x < b; x += intervalo)
    {
        integral += vetor->sizeOfTrapesio();
        A = new Ponto(x, funcao(x));
        vetor->nextTrapesio(A);
    }
    delete A;
    delete B;
    delete vetor;
    //destroir as paradas
    return integral;
}

double IntegralBarra::integrate(double a, double b)
{
    double x , y;
    double integral = 0;
    Barra barra;
    for(x = a, y = a + intervalo/2; x < b - intervalo; x += intervalo, y += intervalo)
    {
        barra.setValues(x, x + intervalo, funcao(y));
        integral += barra.areaBarra();
    }
    
    //destroir as paradas
    
  
    
    return integral;
}

double IntegralPredicao::integrate(double a, double b)
{
    double x = a+intervalo;
    //Ponto A = new Ponto(a, funcao(a));
    //Ponto B = new Ponto(x, funcao(x));
    double integral = 0;
    //Trapesio vetor = new Trapesio(A, B);
    
    for(x += intervalo; x < b; x += intervalo)
    {
        //integral += vetor.sizeOfTrapesio();
        //A = new Ponto(x, funcao(x));
        //vetor.nextTrapesio(A);
    }
    
    //destroir as paradas

    
    return integral;
}