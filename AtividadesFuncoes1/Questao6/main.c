#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int x;
bool boleanopositivo, boleanopar;

bool sinal (int x){
    if (x >= 0){
        return true;
    }
    else{
        return false;
    }
}

bool par (int x){
    if (x % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}
int main () {
    printf("Digite um número: ");
    scanf("%d", &x);
    boleanopositivo = sinal(x);
    boleanopar = par(x);
    if (boleanopar){
        printf("\n%d é par.\n", x);
    }
    else{
        printf("\n%d é ímpar.\n", x);
    }
    if (boleanopositivo){
        printf("\n%d é positivo.\n", x);
    }
    else{
        printf("\n%d é negativo.\n", x);
    }
    return 0;
}
