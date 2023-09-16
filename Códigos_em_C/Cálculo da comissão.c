#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    float valor_Comissao, Comissao;

    /*solicita��o do valor da transa��o ao usu�rio*/
    printf("Informe o valor da transa��o:\nR$ ");
    scanf("%f", &valor_Comissao);

    /*Calculando a comiss�o*/
    if(valor_Comissao <= 2500.00){
        Comissao = 30.00 + (valor_Comissao * 0.017);
    }if((valor_Comissao > 2500.00) && (valor_Comissao <= 6250.00)){
        Comissao = 56.00 + (valor_Comissao * 0.066);
    }if((valor_Comissao > 6250.00) && (valor_Comissao <= 20000.00)){
        Comissao = 76.00 + (valor_Comissao * 0.034);
    }if((valor_Comissao > 20000.00) && (valor_Comissao <= 50000.00)){
        Comissao = 100.00 + (valor_Comissao * 0.022);
    }if((valor_Comissao > 50000.00) && (valor_Comissao <= 500000.00)){
        Comissao = 155.00 + (valor_Comissao * 0.011);
    }if(valor_Comissao > 500000.00){
        Comissao = 255.00 + (valor_Comissao * 0.009);
    }
    //Padroniza o menor valor poss�vel da comiss�o
    if(Comissao < 39.00){
        Comissao = 39.00;
    }

    printf("O valor da comiss�o � de:\nR$ %.2f", Comissao);

    return 0;
}
