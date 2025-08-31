#include <stdio.h>

int main(){
    double nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7 && media <= 10){
        printf("Aluno aprovado");
    } else if (media >= 3 && media < 7) {
        printf("Aluno em exame! Para ser aprovado precisa tirar %.2f", (12 - media));
    } else if (media < 3 && media >= 0) {
        printf("Aluno reprovado");
    } else {
        printf("Notas informadas inválidas!");
    }
    
    return 0;
}