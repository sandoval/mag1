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

using namespace std;

class Start
{
public:
    void start();
private:
    void tela();
    void test();
    void eulerIntegration();
    void verleetIntegration();
    void kuttaIntegration();
    void escreveSerial(double);
    double leSerial();
};


#endif	/* INTERFACE_H */

