#include <stdio.h>

void troca(int n1, int n2) {
    int aux = n1;
    n1 = n2;
    n2 = aux;
    printf("\n");
    printf("O primeiro número foi trocado por: %d! ", n1);
    printf("O segundo número foi trocado por: %d! \n", n2);
    printf("\n");  
}

void soma(int n1, int n2) {
    int soma;
    soma = n1 + n2;
    printf("\n");
    printf("A soma é: %d! \n", soma);
    printf("\n");
}

void sub(int n1, int n2) {
    int sub;
    sub = n1 - n2;
    printf("\n");
    printf("A subtração é: %d! \n", sub);
    printf("\n");

}

void multi(int n1, int n2) {
    int mult;
    mult = n1 * n2;
    printf("\n");
    printf("A multiplicação é: %d! \n", mult);
    printf("\n");
}