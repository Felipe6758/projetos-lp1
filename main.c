#include <stdio.h>
#include <stdlib.h>



void soma(int somaarray[5]) {
    int resultado = 0;
    for (int i = 0; i < 5; i++) {
        resultado += somaarray[i];
    }
    printf("A soma foi: %d\n", resultado);
}

int main() {
    int somaarray[5];
    printf("Digite os numeros: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &somaarray[i]);
    }

    soma(somaarray);

    return 0;
}
