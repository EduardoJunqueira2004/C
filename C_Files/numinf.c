#include <stdio.h>

int main() {
    float soma = 0.0; // Inicializa a soma como 0
    int numerador = 1;
    int denominador = 1;

    // Realiza o somatório conforme o padrão apresentado
    while (numerador <= 99 && denominador <= 50) {
        soma += (float)numerador / denominador; // Soma cada termo da série
        numerador += 2; // Incrementa o numerador de 2 em 2 (1, 3, 5, ...)
        denominador += 1; // Incrementa o denominador de 1 em 1 (1, 2, 3, ...)
    }

    // Exibe o resultado da soma
    printf("O resultado da soma é: %.2f\n", soma);

    return 0;
}