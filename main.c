#include <stdio.h>
#include <stdlib.h>
#include "cifras/cesar.h"
#include "cifras/vigenere.h"

int main() {
    int opcao;

    while (1) {
        printf("\n===== MENU CRIPTOGRAFIA =====\n");
        printf("1 - Cifra de César\n");
        printf("2 - Cifra de Vigenère\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpa o buffer

        switch (opcao) {
            case 1:
                cifraCesar();
                break;
            case 2:
                cifraVigenere();
                break;
            case 0:
                printf("Encerrando o programa.\n");
                return 0;
            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}
