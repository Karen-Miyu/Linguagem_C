#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float R$, taxa, $, real, dolar, taxacao;

    /*Conversor de moedas: real para d�lar*/
    printf("Digite a pre�o em real: \nR$");
    scanf("%f", &R$);
    printf("Digite a cota��o atual do d�lar:\n$");
    scanf("%f", &taxa);

    $ = R$ / taxa;

    printf("\nO valor R$%.2f vale $%.2f\n", R$, $);

    /*Conversor de moedas: d�lar para real*/
    printf("\nDigite a pre�o em d�lar: \n$");
    scanf("%f", &dolar);
    printf("Digite a cota��o atual do real:\nR$");
    scanf("%f", &taxacao);

    real = dolar * taxacao;

    printf("\nO valor $%.2f vale R$%.2f\n", dolar, real);

    system("pause");
    return 0;
}
