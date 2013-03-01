double IntegralTrapezio::integrate(double a, double b)
{
    double x = a+intervalo;
    Ponto *A = new Ponto(funcao(a), a);
    Ponto *B = new Ponto(funcao(x), x);
    double integral = 0;
    Trapesio *vetor = new Trapesio(A, B);
    
    for(x += intervalo; x < b; x += intervalo)
    {
        integral += vetor->sizeOfTrapesio();
        A = new Ponto(funcao(x), x);
        vetor->nextTrapesio(A);
    }
    delete A;
    delete B;
    delete vetor;
    return integral;
}
