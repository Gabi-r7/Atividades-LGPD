#include <stdio.h>

int main()
{
    char gabarito[10], respostas[20][10];
    int resultado[20] = {0};

    printf("Digite as respostas do gabarito (a, b, c ou d):\n");
    for (int i = 0; i < 10; i++){
        printf("Questao %d: ", i+1);
        scanf(" %c", &gabarito[i]);
    }

    for (int i = 0; i < 20; i++){
        printf("Digite as respostas do aluno %d (a, b, c ou d):\n", i+1);
        for (int j = 0; j < 10; j++){
            printf("Questao %d: ", j+1);
            scanf(" %c", &respostas[i][j]);
            while (respostas[i][j] != 'a' && respostas[i][j] != 'b' && respostas[i][j] != 'c' && respostas[i][j] != 'd'){
                printf("Resposta invalida. Digite novamente (a, b, c ou d): ");
                scanf(" %c", &respostas[i][j]);
            }
        }
    }

    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++){
            if (respostas[i][j] == gabarito[j]){
                resultado[i]++;
            }
        }
    }
    printf("Vetor resultado:\n");
    for (int i = 0; i < 20; i++){
        printf("Aluno %d: %d pontos\n", i+1, resultado[i]);
    }

    return 0;
}