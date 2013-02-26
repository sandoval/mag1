/* 
 * File:   TiposBasicos.h
 * Author: Vitor
 *
 * Created on 16 de Fevereiro de 2013, 23:51
 */

#ifndef TIPOSBASICOS_H
#define	TIPOSBASICOS_H

#include <math.h>
class Vetor
{   
public:
    Ponto A;
    Ponto B;
    
    double sizeOfVetor();
    Vetor(Ponto A, Ponto B);
    void nextVetor(Ponto B);
};

inline void Vetor::nextVetor(Ponto B)
{
    //detroy o ponto A
    Vetor.A = Vetor.B;
    Vetor.B = B;
}

inline Vetor::Vetor(Ponto A, Ponto B)
{
    Vetor.A = A;
    Vetor.B = A;
}

inline double Vetor::sizeOfVetor()
{
    double lar = B.x - A.x;
    double alt = B.x - A.x;
    return sqrt(pow(alt, 2) + pow(lar, 2));
}

class Ponto
{
public:
    double x;
    double y;
    
    Ponto(double x, double y);
};

inline Ponto::Ponto(double x, double y)
{
    Ponto.x = x;
    Ponto.y = y;
}
#endif	/* TIPOSBASICOS_H */

