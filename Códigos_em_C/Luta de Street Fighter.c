// O programa serve para simular o resultado de uma luta de Street Fighter
// Os personagens dessa luta s�o Ryu e Ken
#include <stdio.h>

// Fun��o verificadora de n�mero perfeito
int NPerfeito(int n)
{
    int SomaDivisores=0;

    for(int i=1; i<=n/2;i++){ //Somar� todos os divis�veis de n
        if (n%i==0){
            SomaDivisores+=i;
        }
    }
    return SomaDivisores==n;
}

// Fun��o verificadora de n�mero triangular
int NTriangular(int n)
{
    int soma=0;

    for(int i=1; soma<n; i++){  // Soma uma sequ�ncia de n�meros at� resultar em n
        soma+=i;
    }
    return soma==n;
}

int main()
{
    int n=1;

    printf("Digite os golpes dados e os golpes recebidos:\n");

    int Ryu=0, Ken=0;
    while(n!=0){    // Se for igual a zero nem entra no loop
        scanf("%d", &n);    // Os valores digitados devem ser inteiros positivos e negativos
        if(n>0){    // n positivos s�o golpes de Ryu
            if (NPerfeito(n)) { // NPerfeito retorna a fun��o, em caso verdadeiro ir� ser executado a linha de baixo
                Ryu+=(n*3);
            }else if(NTriangular(n)) {  // O mesmo vale para NTriangular
                Ryu+=(n*2);
            }else{
                Ryu+=n;
            }
        }else if(n<0){ // n negativos s�o de Ken
            n*=-1;
            if (NPerfeito(n))  {
                Ken+=(n*3);
            }else if(NTriangular(n)){
                Ken+=(n*2);
            }else{
                Ken+=n;
            }
        }
    }
    // Aqui � verificado o vencedor a partir dos dados obtidos anteriormente
    if(Ken>Ryu){
        printf("\nKen venceu!\n");
    }else if(Ryu>Ken){
        printf("\nRyu venceu!\n");
    }else{
        printf("\nEmpataram!\n");
    }

    return 0;
}
