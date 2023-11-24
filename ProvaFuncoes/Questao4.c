#include <stdio.h>
#include <stdlib.h>

int base = 0, expoente = 0, resultado = 0;

int potencia(int base, int expoente) {
    int cont = 1;
    resultado = base;
    if (expoente == 0){
        return 1;
    }
    else{
        while (cont < expoente){
            resultado = resultado * base;
           cont++;
        }
    }
    return resultado;
}

int main(){
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    resultado = potencia(base, expoente);
    printf("O resultado é: %d", resultado);
    return 0;
}