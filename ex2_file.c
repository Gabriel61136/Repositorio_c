#include <stdio.h>

int main() {
    FILE *arquivo;
    char leitura;
    arquivo = fopen("aula26.txt", "r");

    if (arquivo == NULL) {
        printf("O arquivo nao existe. Criando um novo arquivo.\n");
        arquivo = fopen("aula26.txt", "w");

        if (arquivo == NULL) {
            printf("Erro ao criar o arquivo!\n");
            return 1;
        }
    }

    leitura = getc(arquivo);

    while (leitura != EOF) {
        putchar(leitura);
        leitura = getc(arquivo);
    }

    fclose(arquivo);

    return 0;
}

