#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float R$, taxa, $, real, dolar, taxacao;

    /*Conversor de moedas: real para dólar*/
    printf("Digite a preço em real: \nR$");
    scanf("%f", &R$);
    printf("Digite a cotação atual do dólar:\n$");
    scanf("%f", &taxa);

    $ = R$ / taxa;

    printf("\nO valor R$%.2f vale $%.2f\n", R$, $);

    /*Conversor de moedas: dólar para real*/
    printf("\nDigite a preço em dólar: \n$");
    scanf("%f", &dolar);
    printf("Digite a cotação atual do real:\nR$");
    scanf("%f", &taxacao);

    real = dolar * taxacao;

    printf("\nO valor $%.2f vale R$%.2f\n", dolar, real);

    system("pause");
    return 0;
}
