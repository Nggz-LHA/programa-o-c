#include <stdio.h>

int main(){
    /*
    soma (+)
    subtracao (-)
    multiiplicacao(*)
    divisao (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("entre com o numero 2: \n");
    scanf("%d", &numero2);

// operacao soma 
    soma = numero1 + numero2;

// operacao subtrracao
    subtracao = numero1 - numero2;

// operracao multiplicacao
    multiplicacao = numero1 * numero2;

// opoeracao divisao
    divisao = numero1 / numero2;

    printf("a soma e: %d\n", soma);
    printf("a subtracao e: %d\n", subtracao);
    printf("a multiplicacao e: %d\n", multiplicacao);
    printf("a divisao e: %d\n", divisao);


}