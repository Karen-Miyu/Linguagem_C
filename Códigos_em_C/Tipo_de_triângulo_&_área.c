#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    double a, b, c;

    /*para descobrir se o triângulo é isósceles, ou equilátero, ou escaleno*/
    printf("Digite as três medidas do lado de um triângulo:\n");
    scanf("%lf %lf %lf", &a, &b, &c);


    //verificando os valores válidos para um triângulo
    if(a<=0 || b<=0 || c<=0 || a+b<=c || a+c<=b || b+c<=a){
        printf("Os valores inseridos não formam um triângulo:\\.\n");
        return 1;
    }
    if((a==b) && (b==c))
        printf("\nTriângulo Equilátero");
    else{
        if((a==b) || (c==b)|| (c==a))
            printf("\nTriângulo Isósceles");
        else
            printf("Triângulo Escaleno");
    }
    a=a;
    b=b;
    c=c;
      /*área do triângulo*/
    double s=(a+b+c)/2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nA área do triângulo é: %lf\n", area);

    return 0;
}
