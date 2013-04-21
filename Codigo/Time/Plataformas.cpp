
#include "Plataformas.h"

int PC::get() {}

void PC::pass() {}

void PC::start() {}

void PC::test() {
    double inegral;
    double pressis;
    clock_t time;
    ofstream arqui;
    
    
    arqui.open("TesteTrapezioPC.csv");
    arqui << "Integrais por trapezio PC" << endl;
    arqui << "Tempo;Resultado;Erro;A;B" << endl;
    
    system("cls");
    cout << "executando Trapesio" << endl;
    for (double i = presisMin; i <= presisMax; i += presisPul) {
        IntegralEuler inte(i);
        //zera o tempo
        time = clock();
        //integra com  i
        inegral = inte.integrate(this->Start, this->Fim);

        //compara os resultados
        pressis = this->Resultado - inegral;
        
        //termina a contagem
        time = clock() - time;
        //salva no txt
        arqui <<(double)time/CLOCKS_PER_SEC<< ";" <<inegral<< ";"<<pressis<< ";"<< this->Start << ";"<< this->Fim << endl;

    }
    arqui.close();
    
    
    arqui.open("TesteBarraPC.csv");
    arqui << "Integrais por Barra PC" << endl;
    arqui << "Tempo;Resultado;Erro;A;B" << endl;
    
    cout << "executando Barra" << endl;
    for (double i = presisMin; i <= presisMax; i += presisPul) {
        IntegralBarra inte(i);
        //zera o tempo
        time = clock();
        //integra com  i
        double inegral = inte.integrate(this->Start, this->Fim);

        //compara os resultados
        pressis = this->Resultado - inegral;

        //termina a contagem
        time = clock()-time;
        //salva no txt
        arqui <<(double)time/CLOCKS_PER_SEC<< ";" <<inegral<< ";"<<pressis<< ";"<< this->Start << ";"<< this->Fim << endl;

    }
    arqui.close();
    
    for (double i = presisMin; i <= presisMax; i += presisPul) {
        for (double j = presisMin; j <= presisMax; j += presisPul) {
            IntegralPredicao inte(i, j);

            //zera o tempo
                time = clock();
            //integra com  i
            //double inegral = inte.integrate(this->Start, this->Fim);

            //compara os resultados
            pressis = this->Resultado - inegral;

            //termina a contagem
            time = clock()-time;
            //salva no txt
            //cout << "A integral de " << a << " ate " << b << " com o intevalo de " << c << "e pulo de" << d << " e de " << inegral << endl;
            break;
        }
        break;
    }
}

PC::PC(double a, double b, double c, double d, double e, double f) {
    this->Start = a;
    this->Fim = b;
    this->presisMin = c;
    this->presisMax = d;
    this->presisPul = e;
    this->Resultado = f;
}

int Arduino::get() {

}

void Arduino::pass() {

}

void Arduino::start(){
    
}

void Arduino::test() {

}

int MSP430::get() {

}

void MSP430::pass() {

}

void MSP430::start() {

}

void MSP430::test() {

}