#include <stdio.h>

int main()
{
//O programa serve para calcular a circunferência de qualquer planeta.
    float D, A, Ce, CKm;

    printf("Digite a distancia entre duas localidades do planeta:\n");
    scanf("%f", &D);
    printf("\nAgora digite o angulo formado entre a estaca e a\nhipotenusa(e o ponto mais alto da estaca ate a ponta da sombra da estaca)\n");
    scanf("%f", &A);

//360º é o giro completo de uma esfera.
    Ce = 360 * D / A;

//Sei que 1 estádio equivale a 176,4m = 0,1764km
    CKm = Ce * 0.1764;

    printf("\nA circunferencia em estadios: %.1f Estadios;\nE em quilometro: %.1f km\n", Ce, CKm);

    return 0;
}
