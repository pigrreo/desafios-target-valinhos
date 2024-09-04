#include <stdio.h>
#include <ctype.h>

int main() {
    char letraa[100];
    int count = 0;

    printf("Digite uma string: ");
    fgets(letraa, sizeof(letraa), stdin);

    // Percorre a string para verificar a presen�a da letra 'a'
    for (int i = 0; letraa[i] != '\0'; i++) {
        // Converte o caractere para min�scula para facilitar a verifica��o
        if (tolower(letraa[i]) == 'a') {
            count++;
        }
    }

    // Exibe o resultado
    if (count > 0) {
        printf("A letra 'a' (mai�scula ou min�scula) ocorre %d vez(es) na string.\n", count);
    } else {
        printf("A letra 'a' (mai�scula ou min�scula) n�o ocorre na string.\n");
    }

    return 0;
}
