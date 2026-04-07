#include <stdio.h>
#include <string.h>
#include <ctype.h>

void processarCifra(char mensagem[], int chave) {
    for (int i = 0; mensagem[i] != '\0'; i++) {
        char c = mensagem[i];

        // Processa letras maiúsculas
        if (isupper(c)) {
            mensagem[i] = ((c - 'A' + chave) % 26 + 26) % 26 + 'A';
        }
        // Processa letras minúsculas
        else if (islower(c)) {
            mensagem[i] = ((c - 'a' + chave) % 26 + 26) % 26 + 'a';
        }
        // Sinais e espaços não são alterados
    }
}

int main() {
    char operacao[10];
    char mensagem[500], original[500];
    int chave;

    printf("Deseja 'cifrar' ou 'decifrar'? ");
    scanf("%s", operacao);
    getchar(); // Limpar o buffer do teclado

    printf("Digite a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    mensagem[strcspn(mensagem, "\n")] = 0; // Remove o \n do final

    strcpy(original, mensagem); // Guarda a original para a saída

    printf("Digite o valor da chave (deslocamento): ");
    scanf("%d", &chave);

    // Se for decifrar, invertemos o sinal da chave
    if (strcmp(operacao, "decifrar") == 0) {
        processarCifra(mensagem, -chave);
    } else {
        processarCifra(mensagem, chave);
    }

    printf("\n--- Resultado ---\n");
    printf("Mensagem original: %s\n", original);
    printf("Mensagem resultante: %s\n", mensagem);

    return 0;
}
