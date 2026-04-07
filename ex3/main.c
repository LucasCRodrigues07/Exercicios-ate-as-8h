#include <stdio.h>

int main() {
    int ano, encontrados=0;
    scanf("%d", &ano);
    if(ano < 2021 || ano > 3000) {
        printf("Erro na Entrada\n");
        return 0;
    }
    while(encontrados<3) {
        if(ano%13==0&&ano%17==0){
            printf("%d\n", ano);
            encontrados++;
        }
        ano++;
    }
    return 0;
}