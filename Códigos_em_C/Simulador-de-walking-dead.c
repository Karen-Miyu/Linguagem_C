#include <stdio.h>
#define MAX 50

/*O programa a seguir tem como o objetivo simular um Apocalipse Zumbi por meio de matrizes, onde o número 1 é
a representação de humanos, o número 2 é a representação de zumbis e o número 0 é um espaço inabitado (vazio).
O programa deverá levar em conta as seguintes entrada do usuário e por meio de certas condições monitorar a
simulação da interação entre os humanos e os zumbis, tendo por referências a posição  de vizinhança  e os
sobreviventes de cada espécie em cada um dos dias*/

int main() {
    int m, n, i;

    printf("Digite o numero de linhas e colunas (ate 50): ");
    scanf("%d", &m);
    scanf("%d", &n);

    if (m > MAX || n > MAX) {
        printf("Numero de linhas ou colunas excede o maximo permitido.\n");
        return 1;
    }

    printf("Digite o numero de dias para a simulacao: ");
    scanf("%d", &i);

    int mundo[MAX][MAX];
    int newMundo[MAX][MAX];

    printf("Preencha o mundo (1=humano, 2=zumbi, 0=vazio):\n");
    for (int t = 0; t < m; t++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mundo[t][j]);
        }
    }

    printf("\niteracao 0\n");
    for (int t = 0; t < m; t++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mundo[t][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int dia = 1; dia < i; dia++) {
        for (int t = 0; t < m; t++) {
            for (int j = 0; j < n; j++) {
                int countH = 0, countZ = 0;
                int vizinhos[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

                for (int k = 0; k < 8; k++) {
                    int newLin = (t + vizinhos[k][0] + m) % m;
                    int newCol = (j + vizinhos[k][1] + n) % n;
                        if (newLin < 0) {
                            newLin = m - 1; // Se for negativo, ajuste para a borda inferior
                        }
                        if (newCol < 0) {
                            newCol = n - 1; // Se for negativo, ajuste para a borda da esquerda
                        }
                        if (mundo[newLin][newCol] == 1) {
                            countH++;
                        }
                        if (mundo[t][j] == 2 && countH >= 2) {
                            // Zumbi com dois ou mais vizinhos humanos, é morto
                            newMundo[t][j] = 0;
                        } else if (mundo[t][j] == 2 && countH == 0) {
                            // Zumbi sem vizinhos humanos, morre de fome e fica vazio
                            newMundo[t][j] = 0;
                        } else if (mundo[t][j] == 0 && countH == 2) {
                            // Vazio com exatamente dois vizinhos humanos, nasce humano
                            newMundo[t][j] = 1;
                        } else {
                            // Permanece como está
                            newMundo[t][j] = mundo[t][j];
                        }

                     if (mundo[newLin][newCol] == 2) {
                            countZ++;
                        }
                   if (mundo[t][j] == 1 && countZ >= 1) {
                        // Humano com pelo menos um vizinho zumbi, vira zumbi
                        newMundo[t][j] = 2;
                   }
                }
            }
        }

        printf("iteracao %d:\n", dia);
        for (int t = 0; t < m; t++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", newMundo[t][j]);
            }
            printf("\n");
        }
        printf("\n");

        // Atualiza o mundo para o próximo dia
        for (int t = 0; t < m; t++) {
            for (int j = 0; j < n; j++) {
                mundo[t][j] = newMundo[t][j];
            }
        }
    }

    return 0;
}
