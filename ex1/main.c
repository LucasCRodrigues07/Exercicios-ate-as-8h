#include <stdio.h>

    int main(void) {
        float tempo, somaTotal=0, menorTempo;
        int idade, veteranos=0;

        for (int i = 1; i <= 5; i++) {
            scanf("%f", &tempo);
            scanf("%d", &idade);

            somaTotal += tempo;

            if (idade > 50) {
                veteranos++;
            }

            if (i==1){
                menorTempo = tempo;
            }else if (tempo < menorTempo)
            {
                menorTempo = tempo;
            }
        }
        printf("media geral: %.2f\n", somaTotal / 5);
        printf("quantidade de veteranos: %d\n", veteranos);
        printf("menor tempo registrado: %.2f\n", menorTempo);
        return 0;
    }