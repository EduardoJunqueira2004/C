#include<stdio.h>

int N;

// Função para verificar se um número é primo
void primo(int N) {
    // Números menores ou iguais a 1 não são primos
    if (N <= 1) {
        printf("O numero introduzido: %d nao e primo\n", N);
        return;
    }

    // Loop para verificar divisores de 2 até N/2
    for (int i = 2; i <= N / 2; i++) {
        if (N % i == 0) {
            printf("O numero introduzido: %d nao e primo\n", N);
            return; // Encerra a função assim que encontrar um divisor
        }
    }

    // Se não encontrou nenhum divisor, o número é primo
    printf("O numero introduzido: %d e primo\n", N);
}

int main() {
    // Solicita ao usuário para introduzir um número
    printf("Por favor introduza um numero inteiro: ");
    scanf("%d", &N);

    // Chama a função para verificar se é primo
    primo(N);

    return 0;
}