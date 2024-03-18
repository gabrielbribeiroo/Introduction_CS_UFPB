// Programa, em C, para conversão de binário para decimal

#include <stdio.h>
#include <math.h>

int BinarioParaDecimal(int *n) {
    int num = 0;

    for (int i=0; *n>0; i++) {
        num += (*n % 10) * pow(2, i);
        *n = *n / 10;
        printf("%d", num);
    }

    return num;
}

int main() {
    int binary;

    printf("Digite um numero [EM BINARIO]:\n");
    scanf("%d", &binary);

    printf("Numero %d em decimal: ", binary);
    BinarioParaDecimal(&binary);

    return 0;
}