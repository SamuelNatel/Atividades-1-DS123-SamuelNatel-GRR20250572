#include <stdio.h>

int main(){
    int cargo;
    double salario;

    printf("Digite o seu salário atual: ");
    scanf("%lf", &salario);

    printf("Digite o código do seu cargo: (1,2,3,4 ou 5) ");
    scanf("%d", &cargo);

    if (cargo == 1){
        printf("O cargo é Escrituário!\n");
        printf("O valor do aumento é de: %.2f", salario * 0.5);
    } else if (cargo == 2){
        printf("O cargo é Secretário!\n");
        printf("O valor do aumento é de: %.2f", salario * 0.35);
    }else if (cargo == 3){
        printf("O cargo é Caixa!\n");
        printf("O valor do aumento é de: %.2f", salario * 0.2);    
    }else if (cargo == 4){
        printf("O cargo é Gerente!\n");
        printf("O valor do aumento é de: %.2f", salario * 0.1);
    }else if (cargo == 5){
        printf("O cargo é Diretor!\n");
        printf("O seu cargo não teve aumento");
    }

    return 0;
}