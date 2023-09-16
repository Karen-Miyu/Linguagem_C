#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Calculador de áreas de quadrado, retângulo e círculo
    char op;
    double l, l1, l2, r;

    printf("Digite uma opção(q, r, ou c):\n");
    scanf("%c", &op);
    if(op=='q'){
        printf("Digite o tamanho do lado do quadrado:\n");
        scanf("%lf", &l);
        printf("A área do quadrado é: %.2f\n", l*l);
    }
    if(op=='r'){
        printf("Digite o tamanho de um lado do retângulo:\n");
        scanf("%lf", &l1);
        printf("Digite o tamanho do outro lado do retângulo:\n");
        scanf("%lf", &l2);
        printf("A área do retângulo é: %.2f\n", l1*l2);
    }
    if(op=='c'){
        printf("Digite o tamanho do raio:\n");
        scanf("%lf", &r);
        printf("A área do círculo é: %.2f\n", r*r* 3.1415926535898);
    }
    return 0;
}
