#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, resultado;
    int operador; 
    char resposta;
    int lido;
    char prox_char;


    do {
        // Validação do menu principal
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
            
            // Leitura do operador com validação
            lido = scanf("%d", &operador);
            prox_char = getchar();
            
            
            if (lido != 1 || prox_char != '\n') {
                
                if (prox_char != '\n') {
                    while (getchar() != '\n'); 
                }
                operador = 0; // Repete o menu se a entrada for inválida
            }
            
            if (operador < 1 || operador > 5) {
                printf("Opção inválida. Por favor selecione uma opção válida.\n");
            }
            
        } while (operador < 1 || operador > 5);

        // Operação 5 - Interrompe o laço principal e vai para o fim do programa
        if (operador == 5) {
            break;
        }

        // Operações para as opções 1 a 4
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch (operador) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Erro: Divisão por zero não é permitida.\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                }
                break;
        }

        // Laço de validação para reiniciar ou sair
        do {
            printf("Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &resposta);
            
            if (resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N') {
                printf("Erro: Resposta inválida. Digite 's' para sim ou 'n' para não.\n");
            }
        } while (resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N');

    } while (resposta == 's' || resposta == 'S'); 
    
    printf("Obrigado por usar a calculadora! Até a próxima.\n");

    return 0;
}