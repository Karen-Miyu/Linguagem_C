#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    double x, fx;

    printf("Escolha e digite um n�mero real:\n");
    scanf("%lf", &x);
    fx= sqrt(x) + (x/2) + pow(x,x);

    /*A partir da f(x)= raiz quadrada de x+(x/2)+x^x se obt�m o seguinte resultado:*/
    printf("O resultado �:%.2f\n", fx);

    return 0;
}
