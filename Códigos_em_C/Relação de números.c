#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*Escrevendo um código que lê números inteiros, imprimindo "SIM" para nº pares maiores que 10 ou ímpares menores que 50.\n
    Caso contrário, imprimirá "NÃO".*/

    int x;
    float p,s,t, a, b, c;

    printf("Digite um número inteiro:\n");
    scanf("%d", &x);
    if((x%2==0) && (x>10))
        printf("\nSIM, o nº é par maior que 10!");
    if((x%2==0) && (x<10))
        printf("\nNÃO, o nº é par, mas maior do que 10!");
    if((x%2!=0) && (x<50))
        printf("\nSIM, o nº é ímpar e menor que 50!");
    if((x%2!=0) && (x>50))
        printf("\nNÃO, o nº é ímpar, mas maior que 50!");

    printf("\n--------------------------------------------\n");
    /*Escrevendo um programa que lê três números e imprime o maior deles*/
    printf("Escolha 3 nº e digite-os:\n");
    printf("1º número escolhido: ");
    scanf(" %f", &p);
    printf("2º número escolhido: ");
    scanf(" %f", &s);
    printf("3º número escolhido: ");
    scanf(" %f", &t);
    if((p>=s) && (p>=t))
        printf("O primeiro número escolhido (%.2f) é maior!\n", p);
    if((s>=p) && (s>=t))
       printf("O segundo número escolhido (%.2f) é maior!", s);
    if((t>=p) && (t>=s))
        printf("\nO Terceiro número escolhido (%.2f) é maior!", t);

    printf("\n------------------------------------------------------\n");
    /*Escrevendo um programa que lê três números e imprime em ordem crescente*/
    printf("Escolha mais três números:\n");
    printf("1ª escolha: ");
    scanf("%f", &a);
    printf("2ª escolha: ");
    scanf("%f", &b);
    printf("3ª escolha: ");
    scanf("%f", &c);
    if(a <= b)
       {
        if(b <= c)
        {
         printf("A ordem crescente é: %.2f > %.2f >%.2f\n", a, b, c);
        }
      else
       {
        if (a <= c)
        {
            printf("A ordem crescente é: %.2f >%.2f > %.2f\n", a, c, b);
        }
      else
        {
            printf("A ordem crescente é: %.2f > %.2f > %.2f", c, a, b);
        }
      }
    }
   else
    {
        if( a<= c)
        {
            printf("A ordem crescente é: %.2f > %.2f > %.2f\n", c, a, b);
        }
        else
        {
            if(b <= c)
            {
                printf("A ordem crescente é: %.2f > %.2f > %.2f\n", b, c, a);
            }
            else
            {
               printf("A ordem crescente é: %.2f > %.2f > %.2f\n", c, b, a);
            }
        }
    }

    printf("\n");
    system("pause");
    return 0;
}
