#include <stdlib.h>
#include <stdio.h>

int vetor[7];

void maior(int vetor[]){
    int maior = vetor[0];
    for (int i = 0; i < 7; i++)
    {
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("\nO maior número é %d.\n", maior);
}

int main () {
    for (int i = 0; i < 7; i++)
    {
        printf("Digite o %d° número: ", i+1);
        scanf("%d", &vetor[i]);
    }
    maior(vetor);
}