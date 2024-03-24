#include <stdio.h>

int main() {
    float lado, area;

    // Solicita ao usuário que digite o lado do quadrado
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    // Calcula a área do quadrado
    area = lado * lado;

    // Exibe a área do quadrado
    printf("A area do quadrado com lado %.2f eh: %.2f\n", lado, area);

    return 0;
}
