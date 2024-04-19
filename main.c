/******************************************************************************

Crie um programa que pergunta para o usuário (via teclado) quantos números ele irá digitar 
e armazena em uma variável chamada quant. Logo após, faça com que o usuário digite quant números inteiros, 
e para cada número digitado imprima na tela se o número é negativo, positivo ou zero. 

*******************************************************************************/
#include <stdio.h>


int main() {
    int quant, numero;

    printf("Quantos números você deseja digitar? ");
    scanf("%d", &quant);

    for (int i = 0; i < quant; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numero);

        if (numero < 0) {
            printf("O número %d é negativo.\n", numero);
        } else if (numero > 0) {
            printf("O número %d é positivo.\n", numero);
        } else {
            printf("O número é zero.\n");
        }
    }

    return 0; 
}
