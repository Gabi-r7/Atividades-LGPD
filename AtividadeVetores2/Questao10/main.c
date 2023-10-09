#include <stdlib.h>
#include <stdio.h>

int main(){
    char matriz[20][10], gabaritou[10];
    for (int x = 0; x < 10; x++)
    {
        printf("Digite o gabarito da %d° questao: ", x+1);
        scanf("%d", &gabaritou[x]);
    }

    for (int x = 0; x < 20; x++)
    {
        printf("\nDigite o nome do Aluno: ");
        scanf("%s", &matriz[x][0]);
        for (int y = 0; y < 10; y++)
        {
            printf("Digite a %d° questao: ", y+1);
            scanf("%d", &matriz[x][y]);
        }
    } 
    return 0;
}
