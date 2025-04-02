#include <stdio.h>

// Programa criado por Kaue Paulino
// Esse programa realiza operações básicas (+, -, x, /) entre dois números digitados pelo usuário

int main() {
    int num1, num2, resultado;
    char op;
    
    // Solicita a entrada do usuário no formato "5 + 1"
    printf("Digite a operação (ex: 5 + 1, 4 x 3, 8 / 2, 6 - 1): ");
    scanf("%d %c %d", &num1, &op, &num2);
    
    // Verifica qual operação foi digitada e realiza o cálculo correspondente
    if (op == '+') {
        resultado = num1 + num2;  // Soma
    } else if (op == '-') {
        resultado = num1 - num2;  // Subtração
    } else if (op == 'x' || op == 'X') {
        resultado = num1 * num2;  // Multiplicação
    } else if (op == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;  // Divisão
        } else {
            printf("errrrôô\n");  // Mensagem de erro personalizada
            return 1;  // Encerra o programa em caso de erro
        }
    } else {
        printf("errrrôô\n");  // Mensagem de erro personalizada
        return 1;  // Encerra o programa se a operação não for válida
    }
    
    // Exibe o resultado da operação
    printf("Resultado: %d\n", resultado);
    
    return 0;  // Finaliza o programa corretamente
}