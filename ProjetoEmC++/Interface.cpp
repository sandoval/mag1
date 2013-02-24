#include "Interface.h"
#include "Integral.h"

Start::start()
{
    int option;
    this->tela();
    //peaga otion
    if(option == 0)
    {
        this->test();
    }
    if(option  == 1)
    {
        this->eulerIntegration();
    }
    if(option == 2)
    {
        this->verleetIntegration();
    }
    if(option == 3)
    {
        this->kuttaIntegration();
    }
}

Start::tela()
{
    cout <<"Escolha a sua opcao" <<endl;
    cout <<"Opcao 0 = Testes" <<endl;
    cout <<"Opcao 1 = Integral de Euler" <<endl;
    cout <<"Opcao 2 = Integral de Verllet" <<endl;
    cout <<"Opcao 3 = Integral de Kutta"<<endl;
}

Start::test()
{
    
}

Start::eulerIntegration()
{
    double intervaloa, intervalob, a , b, valorCorreto, valor, pulo;
    
    cout <<"Digite o intervalo de Integraçoa" <<endl;
    cin << a << b;
    cout <<"Digite o intervalo de Integraçoa" <<endl;
    cin << intervaloa << intervalob, pulo;
    cout <<"Digite o valor Correto para comparacao" <<endl;
    cin << valorCorreto;
    cout <<"Integral de Euller de" << a << " a " << b <<endl;
    cout <<"O valor esperado e de " << valorCorreto << endl;
    
    //abre arquivo
    //passa pro arduino
    double tempo, precisao;
    for(double intervalo  = intervaloa; intervalo =< intervalob; intervalo += pulo)
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
        
    }
    
    //fecha arquivo
}

Start::verleetIntegration()
{
    
}

Start::kuttaIntegration()
{
    
}

Start::escreveSerial(double a)
{
    
}

Start::leSerial()
{
    return 0.2;
}