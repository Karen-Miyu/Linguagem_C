#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Calculador de �reas de quadrado, ret�ngulo e c�rculo
    char op;
    double l, l1, l2, r;

    printf("Digite uma op��o(q, r, ou c):\n");
    scanf("%c", &op);
    if(op=='q'){
        printf("Digite o tamanho do lado do quadrado:\n");
        scanf("%lf", &l);
        printf("A �rea do quadrado �: %.2f\n", l*l);
    }
    if(op=='r'){
        printf("Digite o tamanho de um lado do ret�ngulo:\n");
        scanf("%lf", &l1);
        printf("Digite o tamanho do outro lado do ret�ngulo:\n");
        scanf("%lf", &l2);
        printf("A �rea do ret�ngulo �: %.2f\n", l1*l2);
    }
    if(op=='c'){
        printf("Digite o tamanho do raio:\n");
        scanf("%lf", &r);
        printf("A �rea do c�rculo �: %.2f\n", r*r* 3.1415926535898);
    }
    return 0;
}
