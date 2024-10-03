#include <stdio.h>
#include <stdlib.h>

int main() {
    int N; // Número de elementos da sequência

    // Solicitar o número de elementos
    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &N);

    // Verificar se N é positivo
    if (N <= 0) {
        printf("Por favor, insira um numero positivo maior que zero.\n");
        return 1; // Encerra o programa caso o valor seja inválido
    }

    int* numeros = (int*)malloc(N * sizeof(int)); // Aloca dinamicamente o array

    if (numeros == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1; // Encerra o programa em caso de falha de alocação
    }

    // Leitura dos números
    printf("Digite %d numeros:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Imprimir os números na ordem inversa
    printf("Numeros na ordem inversa:\n");
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Liberar a memória alocada
    free(numeros);

    return 0;
}