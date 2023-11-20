#include <stdlib.h>
#include <stdio.h>

float numero, convertido;
int origem, destino;

float conversao(float numero, int origem, int destino) {
    if (origem == 1 && destino == 2) {
        return numero / 4.88;
    }
    else if (origem == 1 && destino == 3) {
        return numero / 5.33;
    }
    else if (origem == 2 && destino == 1) {
        return numero * 4.88;
    }
    else if (origem == 2 && destino == 3) {
        return numero / 1.09;
    }
    else if (origem == 3 && destino == 1) {
        return numero * 5.33;
    }
    else if (origem == 3 && destino == 2) {
        return numero * 1.09;
    }
    else {
        numero = 404;
        return numero;
    }
}

int main() {
    printf("Digite um numero real: ");
    scanf("%f", &numero);
    printf("Qual a moeda de origem? (1 - Real, 2 - Dolar, 3 - Euro): ");
    scanf("%d", &origem);
    printf("Qual a moeda de destino? (1 - Real, 2 - Dolar, 3 - Euro): ");
    scanf("%d", &destino);
    convertido = conversao(numero, origem, destino);
    if (convertido != 404){
        printf("O valor convertido é: %.2f\n", convertido);
    }
    else {
        printf("Erro: Moeda de origem e/ou destino inválida(s).\n");
        return 1;
    }
    return 0;
}