#include <stdio.h>

int main(){
    int num1, num2, num3, num4;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    printf("Digite o quarto número: ");
    scanf("%d", &num4);
    
    if (num4 > num3)
    {
        printf("A ordem descrecente é: %d, %d, %d, %d", num4, num3, num2, num1);
    } else if (num4 < num1 )
    {
        printf("A ordem descrecente é: %d, %d, %d, %d", num3, num2, num1 ,num4);
    } else if (num4 < num2 && num4 > num1)
    {
        printf("A ordem descrecente é: %d, %d, %d, %d", num3, num2, num4, num1);
    } else if (num4 < num3 && num4 > num2)
    {
        printf("A ordem descrecente é: %d, %d, %d, %d", num3, num4, num2, num1);
    }

    return 0;
}