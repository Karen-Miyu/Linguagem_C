#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*Escrevendo um c�digo que l� n�meros inteiros, imprimindo "SIM" para n� pares maiores que 10 ou �mpares menores que 50.\n
    Caso contr�rio, imprimir� "N�O".*/

    int x;
    float p,s,t, a, b, c;

    printf("Digite um n�mero inteiro:\n");
    scanf("%d", &x);
    if((x%2==0) && (x>10))
        printf("\nSIM, o n� � par maior que 10!");
    if((x%2==0) && (x<10))
        printf("\nN�O, o n� � par, mas maior do que 10!");
    if((x%2!=0) && (x<50))
        printf("\nSIM, o n� � �mpar e menor que 50!");
    if((x%2!=0) && (x>50))
        printf("\nN�O, o n� � �mpar, mas maior que 50!");

    printf("\n--------------------------------------------\n");
    /*Escrevendo um programa que l� tr�s n�meros e imprime o maior deles*/
    printf("Escolha 3 n� e digite-os:\n");
    printf("1� n�mero escolhido: ");
    scanf(" %f", &p);
    printf("2� n�mero escolhido: ");
    scanf(" %f", &s);
    printf("3� n�mero escolhido: ");
    scanf(" %f", &t);
    if((p>=s) && (p>=t))
        printf("O primeiro n�mero escolhido (%.2f) � maior!\n", p);
    if((s>=p) && (s>=t))
       printf("O segundo n�mero escolhido (%.2f) � maior!", s);
    if((t>=p) && (t>=s))
        printf("\nO Terceiro n�mero escolhido (%.2f) � maior!", t);

    printf("\n------------------------------------------------------\n");
    /*Escrevendo um programa que l� tr�s n�meros e imprime em ordem crescente*/
    printf("Escolha mais tr�s n�meros:\n");
    printf("1� escolha: ");
    scanf("%f", &a);
    printf("2� escolha: ");
    scanf("%f", &b);
    printf("3� escolha: ");
    scanf("%f", &c);
    if(a <= b)
       {
        if(b <= c)
        {
         printf("A ordem crescente �: %.2f > %.2f >%.2f\n", a, b, c);
        }
      else
       {
        if (a <= c)
        {
            printf("A ordem crescente �: %.2f >%.2f > %.2f\n", a, c, b);
        }
      else
        {
            printf("A ordem crescente �: %.2f > %.2f > %.2f", c, a, b);
        }
      }
    }
   else
    {
        if( a<= c)
        {
            printf("A ordem crescente �: %.2f > %.2f > %.2f\n", c, a, b);
        }
        else
        {
            if(b <= c)
            {
                printf("A ordem crescente �: %.2f > %.2f > %.2f\n", b, c, a);
            }
            else
            {
               printf("A ordem crescente �: %.2f > %.2f > %.2f\n", c, b, a);
            }
        }
    }

    printf("\n");
    system("pause");
    return 0;
}
