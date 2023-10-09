#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][5], maior = 0, soma = 0;
    
    for (int x = 0; x < 5; x++){
        for (int y = 0; y < 5; y++){
            printf("Digite o valor da posicao [%d][%d]: ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }    
    for (int x = 0; x < 5; x++){
        for (int y = 0; y < 5; y++){
            if (x==y)            {
                if (matriz[x][y] > maior)
                {
                    maior = matriz[x][y];
                }
            }
        }
    }
    for (int x = 0, y = 4; x < 5 && y >= 0; x++, y--){
        soma += matriz[x][y];
        printf("%d ", matriz[x][y]);
    }
    for (int x = 0; x < 5; x++){
        for (int y = 0; y < 5; y++){
            printf("%d ", matriz[x][y]);
        }
        printf("\n");
    }
    printf("O maior número é: %d", maior);
    printf("\nA soma dos elementos é: %d", soma);   
    return 0;
}