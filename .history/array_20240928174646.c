#include <stdio.h>

int main() {
    // Definir o array de floats
    float arr[] = {3.0, 5.2, 7.4, 2.5, 3.6, 8.2, 1.1, 7.8, 4.5, 2.2, 7.0};
    
    // Calcular o número de elementos no array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Variável para armazenar a soma
    float soma = 0;

    // Loop para calcular a soma dos elementos
    for(int i = 0; i < n; i++) {
        soma += arr[i];
    }

    // Calcular a média
    float media = soma / n;

    // Exibir a média
    printf("A média dos elementos do array é: %.2f\n", media);

    return 0;
}