#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n,i, numero, soma = 0;

    printf("Digite a quantidade de números que você deseja somar:\n");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("Escolha um número:\n");
        scanf("%d", &numero);
        soma+=numero;
    }
    printf("\nA soma dos números resultou em: %d\n", soma);
    return 0;
}
