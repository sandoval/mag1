/* 
 * File:   TiposBasicos.h
 * Author: Vitor
 *
 * Created on 16 de Fevereiro de 2013, 23:51
 */

#ifndef ENTIDADES_H
#define	ENTIDADES_H
#include <math.h>
#include "TiposBasicos.h"

class Value
{
public:
    double result;
    double time;
};

class Vetor
{
    Ponto *A;
    Ponto *B;
public:
    void setValues(Ponto *A, Ponto *B);
    double getArea();
};

inline void Vetor::setValues(Ponto *A, Ponto *B)
{
    delete this->A;
    delete this->B;
    
    this->A = this->A;
    this->B = this->B;
            
           
}

inline double getArea()
{
    //muito foda
}

class Barra
{
    double a;
    double b;
    double h;
    
public:
    void setValues(double a, double b, double h);
    double areaBarra();
};

inline void Barra::setValues(double a, double b, double h)
{
    this->a = a;
    this->b = b;
    this->h = h;
}

inline double Barra::areaBarra()
{
    return (b -a)*h;
}

class Trapesio
{   
public:
    Ponto *A;
    Ponto *B;
    
    double sizeOfTrapesio();
    Trapesio(Ponto *A, Ponto *B);
    void nextTrapesio(Ponto *B);
};

inline void Trapesio::nextTrapesio(Ponto *B)
{
    delete this->A;
    //detroy o ponto A
    this->A = this->B;
    this->B = B;
}

inline Trapesio::Trapesio(Ponto *A, Ponto *B)
{
    this->A = A;
    this->B = A;
}

inline double Trapesio::sizeOfTrapesio()
{
    double alt = (B->x + A->x) / 2;
    double lar = B->y - A->y;
    return alt*lar;
}

#endif	/* TIPOSBASICOS_H */

