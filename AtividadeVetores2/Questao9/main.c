#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz[6][6], quant = 0;
    for (int x = 0; x < 6; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", x, y);
            scanf("%d", &matriz[x][y]);
            if (matriz[x][y] > 10)
            {
                quant++;
            }
        }
    }
    printf("A quantidade de números maiores que 10 é: %d", quant);
    return 0;
}