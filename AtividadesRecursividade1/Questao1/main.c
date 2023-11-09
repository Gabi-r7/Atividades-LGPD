#include <stdlib.h>
#include <stdio.h>

int n=0, fatorialn=0;


int fatorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    else if (n < 0){
        printf("Não existe fatorial de número negativo\n");
        return 404;
    }
    else{
        return n * fatorial(n-1);
    }
}

int main() {
    printf("Digite um número para fazer o fatorial: ");
    scanf("%d", &n);
    fatorialn = fatorial(n);
    if (fatorialn != 404){
        printf("O fatorial de %d é %d\n", n, fatorialn);
    }
    return 0;
}