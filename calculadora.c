#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1, num2, resultado;
    int operador; 
    char resposta;

    do {
        printf("\n===============================\n");
        printf("   Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção: ");
        scanf("%d", &operador);

    //Operação 5
    if (operador == 5) {
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
        break;
    }
    //Caso em que o usuário insira um número inválido
    if (operador < 1 || operador > 5) {
        printf("Opção inválida. Por favor selecione uma opção válida.\n");
        continue;
    }

    //Operações para as opções 1 a 4
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    switch (operador) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %d + %d = %d\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %d - %d = %d\n", num1, num2, resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %d * %d = %d\n", num1, num2, resultado);
            break;
        case 4:
            if (num2 == 0) {
                printf("Erro: Divisão por zero não é permitida.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %d / %d = %d\n", num1, num2, resultado);
            }
            break;
    }

        printf("Deseja realizar outra operação? (s/n): ");
        scanf(" %c", &resposta);
    } 
    while (resposta == 's');

    if (operador != 5) {
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
    }

    return 0;
}