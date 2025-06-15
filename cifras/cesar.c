#include <stdio.h>
#include <string.h>
#include "cesar.h"

void cifraCesar() {
    char texto[100];
    int chave;

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove \n do texto
    int len = strlen(texto);
    if (texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
    }

    printf("Digite a chave (numero): ");
    scanf("%d", &chave);
    getchar(); // limpa buffer

    printf("Texto criptografado: ");
    for (int i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];
        if (c >= 'a' && c <= 'z') {
            printf("%c", ((c - 'a' + chave) % 26) + 'a');
        } else if (c >= 'A' && c <= 'Z') {
            printf("%c", ((c - 'A' + chave) % 26) + 'A');
        } else {
            printf("%c", c);
        }
    }
    printf("\n");
}
