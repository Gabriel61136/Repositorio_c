#include <stdio.h>

int main() {
    FILE *enderecoArquivo = fopen("testeamais.txt", "w");
    if (enderecoArquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char ch;
    printf("Digite vários caracteres: ");
    while ((ch = getchar()) != '\n') {
        putc(ch, enderecoArquivo); // escreve no arquivo
    }

    fclose(enderecoArquivo);

    return 0;
}
