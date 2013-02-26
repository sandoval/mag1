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
    void start(); //ok
private:
    void tela(); //ok
    void test(); //ok
    
    void eulerIntegrationPT(); //falta arquivo
    void verleetIntegrationPT();
    void kuttaIntegrationPT();
    
    double eulerIntegration(double, double, double); //ok
    double verleetIntegration(double, double, double); 
    double kuttaIntegration();
    
    void escreveSerial(double);
    double leSerial();
};


#endif	/* INTERFACE_H */

