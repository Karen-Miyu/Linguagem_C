#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Calculadora de números fatoriais <= 16.
    int n, i=1, fatorial=1;

    printf("Digite um número para calcular seu fatorial:\n");
    scanf("%d", &n);

    //usando o comando for:
    for(; i<=n; i++){
            fatorial *= i;
    }

    //usando o comando while:
    /*while(i<=n){
        fatorial*=i;
        i++;
        }*/

    //usando o comando do-while:
    /*do{
        fatorial*=i;
        i++;
    }while(n>=i);*/

    printf("O valor em fatorial do número %d foi %d\n", n, fatorial);

    return 0;
}
