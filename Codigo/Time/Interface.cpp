#include "Interface.h"


void Start::start()
{
    int option;
    this->tela();
    cin  >> option;
    
    if(option == 0)
    {
        this->test();
    }
    if(option  == 1)
    {
        PC pc(0, 10, 0.00001, 1, 0.00001, 2500);
        pc.test();
    }
    if(option == 2)
    {
        //Arduino arduino();
        //arduino.test();
    }
    if(option == 3)
    {
        //MSP430 msp430();
        //msp430.test();
    }
}

void Start::tela()
{
    cout <<"Escolha a sua opcao" <<endl;
    cout <<"Opcao 0 = Testes" <<endl;
    cout <<"Opcao 1 = Teste de Performace PC" <<endl;
    cout <<"Opcao 2 = Teste de Performace Arduino" <<endl;
    cout <<"Opcao 3 = Teste de Performace MSP430"<<endl;
}

void Start::test()
{
    double a, b, c, d;
    int option;
    cout <<"Escolha a sua opcao" <<endl;
    cout <<"Opcao 1 = Integral de Trapezio" <<endl;
    cout <<"Opcao 2 = Integral de Barra" <<endl;
    cout <<"Opcao 3 = Integral de Kutta"<<endl;
    cin >> option;
    if(option  == 1)
    {
        cout <<"Digite a, b, pulo" <<endl;
        cin >> a >> b >> c;
        this->eulerIntegration(a, b, c);
    }
    if(option == 2)
    {
        cout <<"Digite a, b, pulo" <<endl;
        cin >> a >> b >> c;
        this->verleetIntegration(a, b ,c);
    }
    if(option == 3)
    {
        cout <<"Digite a, b, pulo, intervalo" <<endl;
        cin >> a >> b >> c >> d;
        this->kuttaIntegration(a, b, c, d);
    }
}

double Start::eulerIntegration(double a, double b, double intervalo)
{
    IntegralEuler inte(intervalo);
    double inegral = inte.integrate(a, b);
    cout <<"A integral de " << a << " ate " << b <<" com o intevalo de " <<intervalo <<" e de " << inegral << endl;
}

double Start::verleetIntegration(double a, double b, double c)
{
    IntegralBarra inte(c);
    double inegral = inte.integrate(a, b);
   cout <<"A integral de " << a << " ate " << b <<" com o intevalo de " << c <<" e de " << inegral << endl;
}

double Start::kuttaIntegration(double a, double b, double c, double d)
{
    IntegralPredicao inte(c, d);
    double inegral = inte.integrate(a, b);
   cout <<"A integral de " << a << " ate " << b <<" com o intevalo de " << c << "e pulo de" << d <<" e de " << inegral << endl;
}

