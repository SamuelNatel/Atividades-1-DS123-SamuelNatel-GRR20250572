#include <stdio.h>

int main()
{
    int idade, i;
    double faixaEtaria[5] = {0, 0, 0, 0, 0};

    for (i = 0; i < 8; i++)
    {
        printf("Digite a idade %dª pessoa: ", i + 1);
        scanf("%d", &idade);
        if (idade <= 15)
        {
            faixaEtaria[0] += 1;
        } else if (idade >= 16 && idade <= 30) {
            faixaEtaria[1] += 1;
        } else if (idade >= 31 && idade <= 45) {
            faixaEtaria[2] += 1;
        } else if (idade >= 46 && idade <= 60) {
            faixaEtaria[3] += 1;
        } else if (idade >= 60) {
            faixaEtaria[4] += 1;
        }
    }

    printf("Existem %.0f pessoa(s) na primeira faixa etária!\n", faixaEtaria[0]);
    printf("Existem %.0f  pessoa(s) na segunda faixa etária!\n", faixaEtaria[1]);
    printf("Existem %.0f  pessoa(s) na terceira faixa etária!\n", faixaEtaria[2]);
    printf("Existem %.0f  pessoa(s) na quarta faixa etária!\n", faixaEtaria[3]);
    printf("Existem %.0f  pessoa(s) na quinta faixa etária!\n", faixaEtaria[4]);
    printf("A porcentagem de pessoas na primeira faixa etária é de: %.0f%%\n", (faixaEtaria[0] / 8) * 100);
    printf("A porcentagem de pessoas na quinta faixa etária é de: %.0f%%\n", (faixaEtaria[4] / 8) * 100);


    return 0;
}