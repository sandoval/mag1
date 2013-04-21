/* 
 * File:   Interface.h
 * Author: Vitor
 *
 * Created on 24 de Fevereiro de 2013, 12:25
 */

#ifndef INTERFACE_H
#define	INTERFACE_H

#include<cstdlib>
#include<iostream>
#include "Integral.h"
#include "Plataformas.h"
using namespace std;

class Start
{
public:
    void start(); //ok
private:
    void tela(); //ok
    void test(); //ok
    
    
    double eulerIntegration(double, double, double); //ok
    double verleetIntegration(double, double, double); //ok
    double kuttaIntegration(double, double, double, double); //ok
    
};


#endif	/* INTERFACE_H */

