#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int n=0, tentativas=0;

int randomico(int n) {
    srand(time(NULL));
    n = (rand() % 100) + 1;

    return n;
}

void dica(int n) {
    int palpite=0;
    printf("Digite um número para adivinhar o número aleatório: ");
    scanf("%d", &palpite);
    if (palpite == n) {
        printf("Parabéns, você acertou!\n");
    }
    else if (palpite > n) {
        printf("O número é menor que %d\n", palpite);
        dica(n);
    }
    else if (palpite < n) {
        printf("O número é maior que %d\n", palpite);
        dica(n);
    }
    tentativas++;
}

int main() {
    n = randomico(n);
    dica(n);
    printf("Você acertou em %d tentativas\n", tentativas);
    return 0;
}