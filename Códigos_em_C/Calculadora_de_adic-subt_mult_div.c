#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float a, b, c, d, e, f;

    /*Calculadora de adi��o, subtra��o, multiplica��o e divis�o*/
    printf("Digite um n�mero:");
    scanf("%f", &a);
    printf("Digite um outro n�mero:");
    scanf("%f", &b);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a/b;
    printf("%.2f + %.2f = %.2f\n", a, b, c);
    printf("%.2f - %.2f = %.2f\n", a, b, d);
    printf("%.2f * %.2f = %.2f\n", a, b, e);
    printf("%.2f / %.2f = %.2f\n", a, b, a/b);

    system("pause");
    return 0;
}
