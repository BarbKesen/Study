#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int notas[3];
    int soma = 0;

    for (int i = 0; i < 3; i++)
    {
        notas[i] = get_int("Nota: ");
        soma = soma + notas[i];
    }

    float media = (float) soma / 3;

    printf("Média: %f\n", media);
}
