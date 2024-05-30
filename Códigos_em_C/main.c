#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h> //para a utilização da função sleep

void conversorBinario (int n, int b[], int *i);

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n, opcao, b[32], i;

    printf("============= Conversor =============\n");
    printf("Digite um número inteiro:\n");
    scanf("%d", &n);
    system("cls");

    printf("Selecione para qual tipo de conversão:\n");
    printf("1 - Para hexadecimal;\n");
    printf("2 - Para Octal;\n");
    printf("3 - Para Binário;\n");
    printf("0 - Para sair.\n");
    printf("\nOpção: ");
    scanf("%d", &opcao);
    getchar();
    system("cls");

    switch(opcao){
    case 1:
        printf("=========== Conversão para Hexadecimais ===========\n");
        printf("%d = %x\n\n", n, n);
        break;
    case 2:
        printf("=========== Conversão para Octal ===========\n");
        printf("%d = %o\n\n", n, n);
        break;
    case 3:
        printf("=========== Conversão para Binário ===========\n");
        printf("%d = ", n);
        conversorBinario(n, b, &i);
        for(int j = i-1; j >= 0; j--){
            printf("%d", b[j]);
        }
        printf("\n");
        break;
    case 0:
        for(int i = 0; i <= 2; i++){
            printf("Você saiu do programa!");
            fflush(stdout);
            sleep(1);
            printf("\r");
        }
        printf("\n");
        break;
    }

    return 0;
}

void conversorBinario (int n, int b[32], int *i){
    *i = 0;
    while(n>0){
        b[(*i)++] = n % 2;
        n = n /2;
    }
}

