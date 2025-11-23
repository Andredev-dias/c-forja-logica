// Inclui a biblioteca stdio.h, que permite usar funções de entrada e saída, como printf() e scanf().
#include<stdio.h>

// Inclui a biblioteca stdlib.h, usada para funções utilitárias, como system().
#include<stdlib.h>

// Início da função principal main, onde o programa começa a ser executado.
int main(){
    
    // Declara três variáveis do tipo float (números reais).
    // num1 e num2 vão receber valores digitados pelo usuário.
    // soma armazenará o resultado da soma.
    float num1, num2, soma;

    // Exibe a mensagem pedindo ao usuário que digite o primeiro número.
    printf("Digite o primeiro numero: ");
    
    // Lê um valor do tipo float digitado pelo usuário.
    // O %f indica que o valor lido é um número real (float).
    // O &num1 é o endereço de memória onde o número será armazenado.
    scanf("%f", &num1);

    // Exibe a mensagem pedindo ao usuário que digite o segundo número.
    printf("Digite o segundo numero: ");

    // Lê o segundo número do tipo float.
    // Novamente %f indica que será lido um float.
    // &num2 é onde o valor será armazenado.
    scanf("%f", &num2);

    // Realiza a soma dos dois números digitados e armazena em 'soma'.
    soma = num1 + num2;

    // Exibe o resultado da soma.
    // %.2f exibe o número real com 2 casas decimais após o ponto.
    printf("A soma dos numeros e: %.2f \n", soma);

    // Pausa o programa até que o usuário pressione uma tecla (funciona no Windows).
    system("pause");

    // Finaliza o programa retornando 0, indicando que tudo ocorreu bem.
    return 0;
}