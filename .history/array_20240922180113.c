#include <stdio.h>

int main() {
    // Definindo o array de valores reais
    float arr[] = {3.0, 5.2, 7.4, 2.5, 3.6, 8.2, 1.1, 7.8, 4.5, 2.2, 7.0};
    int n = sizeof(arr) / sizeof(arr[0]); // Calcula o número de elementos no array

    // Inicializando variáveis para maior, menor e soma
    float maior = arr[0];
    float menor = arr[0];
    float soma = 0;

    // Percorrer o array para encontrar o maior, o menor e calcular a soma
    for (int i = 0; i < n; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
        if (arr[i] < menor) {
            menor = arr[i];
        }
        soma += arr[i];
    }

    // Calcula o valor médio
    float media = soma / n;

    // Imprimir os resultados
    printf("O maior elemento do array: %.2f\n", maior);
    printf("O menor elemento do array: %.2f\n", menor);
    printf("O valor medio dos elementos do array: %.2f\n", media);

    return 0;
}