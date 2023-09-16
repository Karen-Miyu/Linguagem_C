#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    double a, b, c;

    /*para descobrir se o tri�ngulo � is�sceles, ou equil�tero, ou escaleno*/
    printf("Digite as tr�s medidas do lado de um tri�ngulo:\n");
    scanf("%lf %lf %lf", &a, &b, &c);


    //verificando os valores v�lidos para um tri�ngulo
    if(a<=0 || b<=0 || c<=0 || a+b<=c || a+c<=b || b+c<=a){
        printf("Os valores inseridos n�o formam um tri�ngulo:\\.\n");
        return 1;
    }
    if((a==b) && (b==c))
        printf("\nTri�ngulo Equil�tero");
    else{
        if((a==b) || (c==b)|| (c==a))
            printf("\nTri�ngulo Is�sceles");
        else
            printf("Tri�ngulo Escaleno");
    }
    a=a;
    b=b;
    c=c;
      /*�rea do tri�ngulo*/
    double s=(a+b+c)/2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nA �rea do tri�ngulo �: %lf\n", area);

    return 0;
}
