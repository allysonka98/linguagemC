#include <stdio.h>

int main() {
    float num1, num2, media;

    // Solicita ao usuário que digite os dois números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Calcula a média dos dois números
    media = (num1 + num2) / 2;

    // Exibe a média
    printf("A media dos numeros %.2f e %.2f eh: %.2f\n", num1, num2, media);

    return 0;
}
