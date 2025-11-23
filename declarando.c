//Inclui a biblioteca stdio.h, que permite usar funções de entrada e saída, como printf().
#include<stdio.h>
//Inclui a biblioteca stdlib.h, usada para funções utilitárias, como system().
#include<stdlib.h>

//Início da função principal main, onde o programa começa a ser executado.
int main(){
	
    //Declara duas variáveis do tipo float (números reais).
    //num2 é inicializada com o valor 100.
    //num1 NÃO recebe valor, então contém lixo de memória.
	float num1,num2 = 100;
	
    //Imprime o valor das duas variáveis no console.
	printf("%f %f", num1, num2);
	
    //Pausa o programa até que o usuário pressione uma tecla (funciona no Windows).
	system("pause");

    //Finaliza o programa retornando 0, indicando que tudo ocorreu bem.
	return 0;
}