#include <stdio.h>

// Função que calcula o fatorial de um número
long factorial(int n) {
    long resultado = 1; // Inicializa o resultado como 1

    // Calcula o fatorial de n
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado; // Retorna o fatorial
}

int main() {
    int numero;

    // Solicitar ao usuário que insira um número
    printf("Digite um número inteiro para calcular o fatorial: ");
    scanf("%d", &numero);

    // Verificar se o número é não-negativo
    if (numero < 0) {
        printf("Fatorial não é definido para números negativos.\n");
    } else {
        // Chama a função factorial e imprime o resultado
        printf("O fatorial de %d é: %ld\n", numero, factorial(numero));
    }

    return 0;
}