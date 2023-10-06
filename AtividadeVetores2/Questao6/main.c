#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[10][10], maior = 0, linha_maior, coluna_maior;

    // Lendo os valores da matriz
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    // Exibindo a localização do maior valor
    printf("O maior valor encontrado foi %d, na posicao [%d][%d].", maior, linha_maior, coluna_maior);

    return 0;
}
