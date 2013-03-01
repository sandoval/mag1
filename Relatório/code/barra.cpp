double IntegralBarra::integrate(double a, double b)
{
    double x , y;
    double integral = 0;
    Barra barra;
    for(x = a, y = a + intervalo/2; x < b - intervalo; x += intervalo, y += intervalo)
    {
        barra.setValues(x, x + intervalo, funcao(y));
        integral += barra.areaBarra();
    }
    return integral;
}