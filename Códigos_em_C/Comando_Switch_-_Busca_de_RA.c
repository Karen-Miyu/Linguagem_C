#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int ra;

    printf ("Digite o RA do aluno: \n");
    scanf("%d", &ra);
    switch(ra){
    case 101112:
        printf("\nNome do Aluno1\n");
    break;
    case 111213:
        printf("\nNome do Aluno2\n");
    break;
    case 121314:
        printf("\nNome do Aluno3\n");
    break;
    default:
        printf("\nO aluno(a) não está matriculado(a)\n");
    }
    return 0;
}
