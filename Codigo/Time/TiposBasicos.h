/* 
 * File:   tiposbasicos1.h
 * Author: Vitor
 *
 * Created on 26 de Fevereiro de 2013, 01:56
 */

#ifndef TIPOSBASICOS_H
#define	TIPOSBASICOS_H

class Ponto
{
public:
    double x;
    double y;
    
    Ponto(double x, double y);
};

inline Ponto::Ponto(double x, double y)
{
    this->x = x;
    this->y = y;
}

#endif	/* TIPOSBASICOS1_H */

