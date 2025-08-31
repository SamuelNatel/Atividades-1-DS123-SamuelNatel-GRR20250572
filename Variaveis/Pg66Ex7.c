#include <stdio.h>

int main(){
    int numI;
    double numA, numB, numC;
    
    printf("Digite o valor de I: ");
    scanf("%d", &numI);

    printf("Digite o valor de A: ");
    scanf("%lf", &numA);

    printf("Digite o valor de B: ");
    scanf("%lf", &numB);

    printf("Digite o valor de C: ");
    scanf("%lf", &numC);

    if (numI == 1)
    {
        if (numA < numB && numA < numC)
        {
            if (numB < numC)
            {
                printf("A ordem crescente é: %.2f, %.2f, %.2f", numA, numB, numC);
            } else {
                printf("A ordem crescente é: %.2f, %.2f, %.2f", numA, numC, numB);
            }
        } else if (numB < numA && numB < numC)
        {
            if (numA < numC)
            {
                printf("A ordem crescente é: %.2f, %.2f, %.2f", numB, numA, numC);
            } else {
                printf("A ordem crescente é: %.2f, %.2f, %.2f", numB, numC, numA);
            }
        } else if (numC < numB && numC < numA)
        {
            if (numB < numA)
            {
                printf("A ordem crescente é: %.2f, %.2f, %.2f", numC, numB, numA);
            } else {
                printf("A ordem crescente é: %.2f, %.2f, %.2f", numC, numA, numB);
            }
        }
    } else if (numI == 2)
    {
        if (numA < numB && numA < numC)
        {
            if (numB < numC)
            {
                printf("A ordem decrescente é: %.2f, %.2f, %.2f", numC, numB, numA);
            } else {
                printf("A ordem decrescente é: %.2f, %.2f, %.2f", numB, numC, numA);
            }
        } else if (numB < numA && numB < numC)
        {
            if (numA < numC)
            {
                printf("A ordem decrescente é: %.2f, %.2f, %.2f", numC, numA, numB);
            } else {
                printf("A ordem decrescente é: %.2f, %.2f, %.2f", numA, numC, numB);
            }
        } else if (numC < numB && numC < numA)
        {
            if (numB < numA)
            {
                printf("A ordem decrescente é: %.2f, %.2f, %.2f", numA, numB, numC);
            } else {
                printf("A ordem decrescente é: %.2f, %.2f, %.2f", numB, numA, numC);
            }
        }
    } else if (numI == 3){
        if (numA > numB && numA > numC)
        {
            printf("O maior número está no meio: %.2f, %.2f, %.2f", numB, numA, numC);
        } else if (numB > numA && numB > numC)
        {
            printf("O maior número está no meio: %.2f, %.2f, %.2f", numA, numB, numC);
        } else if (numC > numB && numC > numA)
        {
            printf("O maior número está no meio: %.2f, %.2f, %.2f", numB, numC, numA);
        }
    }

    return 0;
}