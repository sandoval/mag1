#include "Interface.h"
#include "Integral.h"

void Start::start()
{
    int option;
    this->tela();
    //peaga otion
    cin  >> option;
    if(option == 0)
    {
        this->test();
    }
    if(option  == 1)
    {
        this->eulerIntegrationPT();
    }
    if(option == 2)
    {
        this->verleetIntegrationPT();
    }
    if(option == 3)
    {
        this->kuttaIntegrationPT();
    }
}

void Start::tela()
{
    cout <<"Escolha a sua opcao" <<endl;
    cout <<"Opcao 0 = Testes" <<endl;
    cout <<"Opcao 1 = Integral de Euler" <<endl;
    cout <<"Opcao 2 = Integral de Verllet" <<endl;
    cout <<"Opcao 3 = Integral de Kutta"<<endl;
}

void Start::test()
{
    double a, b, c, d;
    int option;
    cout <<"Escolha a sua opcao" <<endl;
    cout <<"Opcao 1 = Integral de Euler" <<endl;
    cout <<"Opcao 2 = Integral de Verllet" <<endl;
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
        this->verleetIntegration();
    }
    if(option == 3)
    {
        this->kuttaIntegrationPT();
    }
}

double Start::eulerIntegration(double a, double b, double intervalo)
{
    IntegralEuler inte(intervalo);
    double inegral = inte.integrate(a, b);
    cout <<"A integral de " << a << " ate " << b <<"com o intevalo de " <<intervalo <<" e de " << inegral << endl;
}

double Start::verleetIntegration()
{
    
}

double Start::kuttaIntegration()
{
    
}

void Start::eulerIntegrationPT()
{
    
    double intervaloa, intervalob, a , b, valorCorreto, valor, pulo;
    ofstream entrada ("w:IntegralEuler.csv", ios::in);
    
    cout <<"Digite o intervalo de Integraçoa" <<endl;
    cin >> a >> b;
    cout <<"Digite o intervalo de Integraçoa" <<endl;
    cin >> intervaloa >> intervalob >> pulo;
    cout <<"Digite o valor Correto para comparacao" <<endl;
    cin >> valorCorreto;
    cout <<"Integral de Euller de" << a << " a " << b <<endl;
    cout <<"O valor esperado e de " << valorCorreto << endl;
    
    //abre arquivo
    
    //passa pro arduino
    double tempo, precisao;
    for(double intervalo  = intervaloa; intervalo <= intervalob; intervalo += pulo)
    {
        //passa pro arduino
        escreveSerial(0);
        escreveSerial(intervalo);
        escreveSerial(a);
        escreveSerial(b);
        
        //le do arduino
        cout << "O valor do espaco de vetroes e de :" << intervalo << endl;
        valor  = leSerial();
        cout << "O valor da integral e de :" << valor << endl;
        tempo  = leSerial();
        cout << "O valor do tempo de Integraçao e de :" << tempo << endl;
        precisao = valorCorreto - valor;
        cout << "O valor do Presisao e de :" << precisao << endl;
        
        //escreve no aquivo
        entrada << intervalo << ";" << valor << ";" << tempo << ";" << precisao << ";" << endl;
    }
    
    //fecha arquivo
     
}

void Start::verleetIntegrationPT()
{
    
}

void Start::kuttaIntegrationPT()
{
    
}

void Start::escreveSerial(double a)
{
    
}

double Start::leSerial()
{
    return 0.2;
}