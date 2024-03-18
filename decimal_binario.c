// Programa, em C para conversão de decimal para binário

#include <stdio.h>

void DecimalParaBinario(int *n) {
    int binary[8];

    for (int i=0; i<=7; i++) {
        binary[i] = *n % 2;
        *n = *n / 2;
        printf("%d", binary[i]);
    }
}

int main() {
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    printf("Numero %d em binario: ", num);
    DecimalParaBinario(&num);

    return 0;
}