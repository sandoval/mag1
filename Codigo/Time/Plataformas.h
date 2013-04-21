/* 
 * File:   Plataformas.h
 * Author: Vitor
 *
 * Created on 7 de Abril de 2013, 23:44
 */

#ifndef PLATAFORMAS_H
#define	PLATAFORMAS_H

#include <string>
#include <time.h>
#include <iostream>
#include <fstream>

#include "Integral.h"
#include "stdlib.h"

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;



class Plataform
{
protected:
    double Start;
    double Fim;
    double presisMin;
    double presisMax;
    double presisPul;
    double Resultado;
    string nome;
    
public:
    virtual void test() = 0;
    virtual void pass() = 0;
    virtual int get() = 0;
    virtual void start() = 0;
};


class PC : public Plataform
{
public:
    void test();
    void pass();
    int get();
    void start();
    PC(double, double, double, double, double, double);
};

class Arduino : public Plataform
{
public:
    void test();
    void pass();
    int get();
    void start();
};

class MSP430 : public Plataform
{
public:
    void test();
    void pass();
    int get();
    void start();
};



#endif	/* PLATAFORMAS_H */

