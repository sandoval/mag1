/* 
 * File:   Integral.h
 * Author: Vitor
 *
 * Created on 16 de Fevereiro de 2013, 23:51
 */

#ifndef INTEGRAL_H
#define	INTEGRAL_H

#include "TiposBasicos.h"

class Integral {
public:
    double funcao(double x);
    virtual double integrate(double a, double b) = 0;
};

inline double Integral::funcao(double x) {
    static int i = 0;
    return x+pow(x, 3)+2*x -5;
    i++;
};

class IntegralEuler : public Integral {
    double intervalo;
public:
    IntegralEuler(double);
    double integrate(double a, double b);
}; //ok

class IntegralBarra : public Integral {
    double intervalo;
public:
    IntegralBarra(double);
    double integrate(double a, double b);
};

class IntegralPredicao : public Integral {
    double intervalo;
public:
    IntegralPredicao(double);
    double integrate(double a, double b);
};



inline IntegralEuler::IntegralEuler(double a) {
    intervalo = a;
}

inline IntegralBarra::IntegralBarra(double a) {
    intervalo = a;
}

inline IntegralPredicao::IntegralPredicao(double a) {
    intervalo = a;
}
#endif	/* INTEGRAL_H */

