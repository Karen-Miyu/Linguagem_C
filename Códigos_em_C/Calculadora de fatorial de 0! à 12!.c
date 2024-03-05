#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

long fat (long n);

int main()
{
    setlocale(LC_ALL, "portuguese");

    long x;

    printf("Digite um número: ");
    scanf("%d", &x);
    printf(fat(x));
    return 0;
}

long fat(long n){
    if(n <= 0){
        printf("%d! = 1\n", n);
        return 1;
    }
    long resultado = 1;
    for(int i = 1; i <= n; i++){
        resultado *= i;
    }
    printf("%d! = %d\n", n, resultado);
    return 1;
}
