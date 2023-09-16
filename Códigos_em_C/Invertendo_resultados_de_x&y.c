#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  int w, x, y;

  printf("Digite o valor de x:\n");
  scanf("%d", &x);
  printf("Digite o valor de y:\n");
  scanf("%d", &y);

  //Usando o XOR:
  x = x^y;
  y = y^x;
  x = x^y;

  //Atribuindo valores:
  /*w = x;
  x = y;
  y = w;*/

  //Trocando os resultados:
  /*printf("Logo:\nx=%d\ny=%d", y,x);*/

  printf("Logo:\nx=%d\ny=%d", x,y);

    return 0;
}
