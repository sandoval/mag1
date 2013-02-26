/* 
 * File:   Integral.h
 * Author: Vitor
 *
 * Created on 16 de Fevereiro de 2013, 23:51
 */

#ifndef INTEGRAL_H
#define	INTEGRAL_H

#include "TiposBasicos.h"

class Integral
{
public:
    double funcao(double x);
    virtual double integrate(double a, double b) = 0;
};

inline double Integral::funcao(double x)
{
    return x^2;
};

class IntegralEuler : public Integral
{
    double intervalo;
public:
    IntegralEuler(double);
    double integrate(double a, double b);
};

inline IntegralEuler::IntegralEuler(double a)
{
    intervalo = a;
}

class IntegralVerlet : public Integral
{
    
};

class  IntegralRunge : public Integral
{
    
};


#endif	/* INTEGRAL_H */

