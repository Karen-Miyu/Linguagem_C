#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"Portuguese");

  int x = 15, n, y;
  float w;
  char vazio, t;

  printf("Ol� Pessoal!\n\\n\t -\t � o comando new line;\n");
  printf("\b\a\\a\t -\t emite um alerta sonoro;\n");
  printf("\b\\b\t -\t volta uma letra para tr�s, afim de digitar;\n");
  printf("\r\\r\t -\t faz o mesmo, s� que volta ao in�cio da linha;");
  printf("\v\\v\t -\t pula linha;\n");
  printf("\\t\t -\t serve para criar uma nova coluna, como vista nesta tabela de informa��es;\n");
  printf("\\'\t -\t coloca um ap�strofe, se voc� quiser usar as aspas duplas fazando o mesmo;\n");
  printf("\\\\ \t -\t para coloca a barra;\n\n");

  printf("--------------------------------------------------------------\n");

  printf("Testando tipos, como float, float definido, caracter, string.\n");
  printf("N� float: ");
  printf("%f", 10.9);
  printf("\nN� float definido: ");
  printf("%.3f",  3,14159265358979323846);
  printf("\nCaracter: ");
  printf("%c",65);
  printf("\nString: ");
  printf("%s","Meu 1� programa\n");

  printf("-----------------------------------\n");

  printf("Modo de intera��o entre humano e m�quina:\n");
  printf("-> Digite um n�mero:");
  scanf("%Id", &n);
  printf("O valor digitado foi %d\n", n);

  printf("----------------------------\n");

  printf("-> Entre com um caracter n�o especial:\n");
  scanf(" %c", &t);
  printf("-> Entre com um ponto flutuante:\n");
  scanf("%f", &w);
  printf("-> Entre com um n�mero:\n");
  scanf("%d", &y);

  printf("Os dados lidos foram: %c, %f, %d \n",t,w,y);

   printf("--------------------------------------\n");

  system("pause");
  return 0;
}

