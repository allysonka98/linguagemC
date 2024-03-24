
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int idade, ano_atual, ano_nascimento;

    // Obtém o ano atual
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    ano_atual = tm.tm_year + 1900;

    // Solicita ao usuário que digite sua idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Calcula o ano de nascimento
    ano_nascimento = ano_atual - idade;

    // Exibe o ano de nascimento
    printf("Voce nasceu no ano de: %d\n", ano_nascimento);

    return 0;
}
