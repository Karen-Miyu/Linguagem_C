#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int a, b, c, maior;

    printf("Escolha tr�s n�meros:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && b>c)
        maior = a;
    else{
        if(b>c)
            maior=b;
        else
            maior=c;
    }
    printf("\nMaior valor � %d", maior);
    return 0;
}
