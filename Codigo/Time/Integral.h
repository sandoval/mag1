/* 
 * File:   Integral.h
 * Author: Vitor
 *
 * Created on 16 de Fevereiro de 2013, 23:51
 */

#ifndef INTEGRAL_H
#define	INTEGRAL_H

#include "Entidades.h"

class Integral {
public:
    double funcao(double x);
    virtual double integrate(double a, double b) = 0;
};

inline double Integral::funcao(double x) {
    return pow(x, 3);
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

class IntegralPredicao{
    double intervalo;
    double pulo;
public:
    IntegralPredicao(double, double);
    double integrate(double a, double b);
};



inline IntegralEuler::IntegralEuler(double a) {
    intervalo = a;
}

inline IntegralBarra::IntegralBarra(double a) {
    intervalo = a;
}

inline IntegralPredicao::IntegralPredicao(double a, double b) {
    intervalo = a;
    pulo = b;
}
#endif	/* INTEGRAL_H */

