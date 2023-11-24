#include <stdio.h>
#include <stdlib.h>

int vetor[7], menor = 0;

void verificarMenor(int vetor[]) {
    for (int i = 0; i < 7; i++){
        menor = vetor[0];
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("O menor número é: %d", menor);
}

int main() {
    for (int i = 0; i < 7; i++){
        printf("Digite um número para a %d posicao: ", i+1);
        scanf("%d", &vetor[i]);
    }
    verificarMenor(vetor);
    return 0;
}