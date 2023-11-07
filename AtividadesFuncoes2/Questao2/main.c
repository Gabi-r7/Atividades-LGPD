#include <stdlib.h>
#include <stdio.h>

int n=0, nquadrado=0;

int quadrado(int n){
    int quadrado = n*n;
    return quadrado;
}

int main () {
    printf("Digite um número: ");
    scanf("%d", &n);
    nquadrado = quadrado(n);
    printf("O quadrado de %d é %d.\n", n, nquadrado);
    return 0;
}