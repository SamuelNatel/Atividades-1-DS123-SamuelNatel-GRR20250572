#include <stdio.h>

int main(){
    char cidade[50], cidadeMaiorAcidente[50], cidadeMenorAcidente[50];
    int veiculosPasseio, acidentesComVitimas, i, maiorAcidente = 0, menorAcidente = 9999, acidentesComMenosDeDoisMil = 0;
    double somaVeiculos, somaVeiculosComMenosDeDoisMil = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome da sua cidade: ");
        scanf("%s", cidade);

        printf("Digite o número de veículos de passeio: ");
        scanf("%d", &veiculosPasseio);

        printf("Digite o número de acidentes de trânsito com vítimas: ");
        scanf("%d", &acidentesComVitimas);

        if (acidentesComVitimas > maiorAcidente){
            maiorAcidente = acidentesComVitimas;
            strcpy(cidadeMaiorAcidente, cidade);
        }

        if (acidentesComVitimas < menorAcidente){
            menorAcidente = acidentesComVitimas;
            strcpy(cidadeMenorAcidente, cidade);
        }

        somaVeiculos = somaVeiculos + veiculosPasseio;

        if (veiculosPasseio < 2000)
        {
            acidentesComMenosDeDoisMil += 1;
            somaVeiculosComMenosDeDoisMil += acidentesComVitimas;
        }
    }

    printf("A cidade com menor índice de acidente é: %s, com %d acidetente(s)!\n", cidadeMenorAcidente, menorAcidente);
    printf("A cidade com maior índice de acidente é: %s, com %d acidetente(s)!\n", cidadeMaiorAcidente, maiorAcidente);
    printf("A média de veículos nas 5 cidades é: %.2f\n", somaVeiculos / 5);
    printf("A média de acidentes de trânsito nas cidades com menos de 2000 veículos de passeio é: %.2f", somaVeiculosComMenosDeDoisMil / acidentesComMenosDeDoisMil);

    return 0;
}