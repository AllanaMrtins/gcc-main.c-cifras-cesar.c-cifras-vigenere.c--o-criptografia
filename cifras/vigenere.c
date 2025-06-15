#include <stdio.h>
#include <string.h>
#include "vigenere.h"

void cifraVigenere() {
    char texto[100], chave[100];
    int i, j = 0;

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);
    int lenT = strlen(texto);
    if (texto[lenT - 1] == '\n') texto[lenT - 1] = '\0';

    printf("Digite a chave: ");
    fgets(chave, sizeof(chave), stdin);
    int lenC = strlen(chave);
    if (chave[lenC - 1] == '\n') chave[lenC - 1] = '\0';

    printf("Texto criptografado: ");
    for (i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];
        char k = chave[j % strlen(chave)];

        if (c >= 'a' && c <= 'z') {
            printf("%c", ((c - 'a' + (k - 'a')) % 26) + 'a');
            j++;
        } else if (c >= 'A' && c <= 'Z') {
            printf("%c", ((c - 'A' + (k - 'A')) % 26) + 'A');
            j++;
        } else {
            printf("%c", c);
        }
    }
    printf("\n");
}
