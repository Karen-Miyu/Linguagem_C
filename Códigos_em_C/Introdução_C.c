#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"Portuguese");

  int x = 15, n, y;
  float w;
  char vazio, t;

  printf("Olá Pessoal!\n\\n\t -\t é o comando new line;\n");
  printf("\b\a\\a\t -\t emite um alerta sonoro;\n");
  printf("\b\\b\t -\t volta uma letra para trás, afim de digitar;\n");
  printf("\r\\r\t -\t faz o mesmo, só que volta ao início da linha;");
  printf("\v\\v\t -\t pula linha;\n");
  printf("\\t\t -\t serve para criar uma nova coluna, como vista nesta tabela de informações;\n");
  printf("\\'\t -\t coloca um apóstrofe, se você quiser usar as aspas duplas fazando o mesmo;\n");
  printf("\\\\ \t -\t para coloca a barra;\n\n");

  printf("--------------------------------------------------------------\n");

  printf("Testando tipos, como float, float definido, caracter, string.\n");
  printf("Nº float: ");
  printf("%f", 10.9);
  printf("\nNº float definido: ");
  printf("%.3f",  3,14159265358979323846);
  printf("\nCaracter: ");
  printf("%c",65);
  printf("\nString: ");
  printf("%s","Meu 1º programa\n");

  printf("-----------------------------------\n");

  printf("Modo de interação entre humano e máquina:\n");
  printf("-> Digite um número:");
  scanf("%Id", &n);
  printf("O valor digitado foi %d\n", n);

  printf("----------------------------\n");

  printf("-> Entre com um caracter não especial:\n");
  scanf(" %c", &t);
  printf("-> Entre com um ponto flutuante:\n");
  scanf("%f", &w);
  printf("-> Entre com um número:\n");
  scanf("%d", &y);

  printf("Os dados lidos foram: %c, %f, %d \n",t,w,y);

   printf("--------------------------------------\n");

  system("pause");
  return 0;
}

