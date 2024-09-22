#include <stdio.h>

// Função que imprime os N primeiros termos da sequência de Fibonacci
void Fibonacci(int N) {
    // Inicializa os dois primeiros termos da sequência
    int t1 = 0, t2 = 1, proximoTermo;

    printf("Sequência de Fibonacci com %d termos:\n", N);

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%d ", t1); // Primeiro termo
            continue;
        }
        if (i == 2) {
            printf("%d ", t2); // Segundo termo
            continue;
        }
        proximoTermo = t1 + t2; // Calcula o próximo termo
        printf("%d ", proximoTermo); // Imprime o próximo termo

        // Atualiza os valores de t1 e t2
        t1 = t2;
        t2 = proximoTermo;
    }
    printf("\n"); // Nova linha após a sequência
}

int main() {
    int N;

    // Solicitar o valor de N ao usuário
    printf("Digite o número de termos da sequência de Fibonacci que deseja imprimir: ");
    scanf("%d", &N);

    // Verificar se o valor de N é positivo
    if (N <= 0) {
        printf("Por favor, insira um número maior que 0.\n");
    } else {
        // Chama a função Fibonacci para imprimir os termos
        Fibonacci(N);
    }

    return 0;
}