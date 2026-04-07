#include <stdio.h>

int main() {
    float diametro;
    int total=0, aprovadas=0, reprovadas=0, opcao;
    do {
        do {
            scanf("%f", &diametro);
            if (diametro <= 0) {
                printf("erro. Valor deve ser positivo!\n");
            }
        } while (diametro <= 0);
        total++;
        if (diametro >= 10.0 && diametro <= 12.0){
            aprovadas++;
        } else {
            reprovadas++;
        }
        printf("deseja analisar outra peça? (1 - Sim / 0 - Não)");
        scanf("%d", &opcao);
    } while (opcao != 0);
    printf("total pecas: %d\n", total);
    printf("quantidade aprovadas: %d\n", aprovadas);
    printf("quantidade reprovadas: %d\n", reprovadas);
    return 0;
}